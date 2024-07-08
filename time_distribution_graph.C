#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <sstream>
#include "TCanvas.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TAxis.h"
#include "TF1.h"
#include "TRandom3.h"

// Definizione delle costanti
const double SATURATION_LIMIT = 2700;
const int NUM_POINTS = 10000;
const double GAUSSIAN_STDDEV = 0.8;

// Funzione gaussiana
double gaussian(double x, double mean, double stddev) {
    return (1.0 / (stddev * sqrt(2.0 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
}

// Somma di gaussiane
double Gaussian_sum(double x, const std::vector<double>& times) {
    double G = 0;
    for (double t : times) {
        G += gaussian(x, t, GAUSSIAN_STDDEV) * exp(-0.3 * x);
    }
    return G;
}

// Funzione definita dall'utente
double myFunction(double x, int dim) {
    const double tau = 3.08;
    const double a = 0.588;
    double num = std::pow(x / tau, (1 / a) - 1);
    double den = tau * a * std::pow(1 + std::pow(x / tau, 1 / a), 2);
    return dim * (num / den);
}

// Funzione di integrazione
double integrate(const double x[], const double y[], int num) {
    double area = 0.0;
    for (size_t i = 1; i < num; ++i) {
        double dx = x[i] - x[i - 1];
        double avg_height = (y[i] + y[i - 1]) / 2.0;
        area += dx * avg_height;
    }
    return area;
}

// Funzione per processare un file e generare i grafici
void processFile(const std::string& filename, std::vector<double>& N, std::vector<double>& tot_l, std::vector<double>& tot_h) {
    // Apertura del file e lettura dei dati
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file " << filename << "!" << std::endl;
        return;
    }

    std::vector<double> times;
    std::string line;
    while (std::getline(file, line)) {
        double value = std::stod(line);
        times.push_back(value);
    }
    file.close();

    // Traslazione dei tempi al valore minimo
    double minTime = *std::min_element(times.begin(), times.end());
    for (double& t : times) {
        t -= minTime;
    }

    // Generazione dei dati x e y
    std::vector<double> x(NUM_POINTS), y(NUM_POINTS);
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distributionX(-1, 20);
    std::uniform_real_distribution<double> distributionY(0, 20);

    for (int i = 0; i < NUM_POINTS; ++i) {
        x[i] = distributionX(generator);
        y[i] = distributionY(generator);
    }

    // Ordinamento dei dati x e y
    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());

    // Calcolo delle funzioni G e F
    std::vector<double> G(NUM_POINTS), F(NUM_POINTS);
    for (int i = 0; i < NUM_POINTS; ++i) {
        G[i] = Gaussian_sum(x[i], times);
        F[i] = myFunction(y[i], times.size());
    }

    // Normalizzazione delle funzioni
    double maxG = *std::max_element(G.begin(), G.end());
    double maxF = *std::max_element(F.begin(), F.end());

    double scaleG = times.size() / maxG;
    double scaleF = times.size() / maxF;

    for (int i = 0; i < NUM_POINTS; ++i) {
        G[i] *= scaleG;
        F[i] *= scaleF;
        if (G[i] > SATURATION_LIMIT) {
            G[i] = SATURATION_LIMIT;
        }
    }

    // Calcolo ToT per soglia bassa
    int start_low = -1;
    double time_start_low = 0;
    double time_stop_low = 0;
    const double low_thr = 5.0;

    // Trova il tempo di inizio (prima volta che il segnale supera la soglia bassa)
    for (int i = 0; i < NUM_POINTS; ++i) {
        if (G[i] > low_thr) {
            start_low = i;
            time_start_low = x[i];
            break;
        }
    }

    if (start_low != -1) {
        // Trova il tempo di fine (prima volta che il segnale scende sotto la soglia bassa dopo aver superato la soglia bassa)
        for (int i = start_low + 1; i < NUM_POINTS; ++i) {
            if (G[i] < low_thr) {
                time_stop_low = x[i - 1];
                break;
            }
        }
    } else {
        std::cout << "No signal for low threshold" << std::endl;
    }

    double ToT_low = time_stop_low - time_start_low;
    if (ToT_low <= 0) ToT_low = -1;
    tot_l.push_back(ToT_low);

    // Calcolo ToT per soglia alta
    int start_high = -1;
    double time_start_high = 0;
    double time_stop_high = 0;
    const double high_thr = 100.0;

    // Trova il tempo di inizio (prima volta che il segnale supera la soglia alta)
    for (int i = 0; i < NUM_POINTS; ++i) {
        if (G[i] > high_thr) {
            start_high = i;
            time_start_high = x[i];
            break;
        }
    }

    if (start_high != -1) {
        // Trova il tempo di fine (prima volta che il segnale scende sotto la soglia alta dopo aver superato la soglia alta)
        for (int i = start_high + 1; i < NUM_POINTS; ++i) {
            if (G[i] < high_thr) {
                time_stop_high = x[i - 1];
                break;
            }
        }
    } else {
        std::cout << "No signal for high threshold" << std::endl;
    }

    double ToT_high = time_stop_high - time_start_high;
    if (ToT_high <= 0)ToT_high = -1;
    tot_h.push_back(ToT_high);

    N.push_back(times.size());

    // Creazione dei grafici
    TGraph* gaussianGraph = new TGraph(NUM_POINTS, x.data(), G.data());
    TGraph* expectedGraph = new TGraph(NUM_POINTS, y.data(), F.data());

    gaussianGraph->SetLineColor(kMagenta);
    gaussianGraph->SetLineWidth(2);
    expectedGraph->SetLineColor(kYellow);
    expectedGraph->SetLineWidth(2);

    TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(gaussianGraph, "Simulated distribution", "l");
    legend->AddEntry(expectedGraph, "Expected distribution", "l");

    // Creazione del canvas e disegno dei grafici
    TCanvas* canvas = new TCanvas("canvas", "Photoelectron Time Distribution", 800, 600);
    canvas->SetGrid();
    gaussianGraph->GetXaxis()->SetTitle("Time [ns]");
    gaussianGraph->GetYaxis()->SetTitle("# Photoelectrons");
    gaussianGraph->SetTitle("Time Distribution");
    gaussianGraph->GetXaxis()->SetTitleFont(42);
    gaussianGraph->GetXaxis()->SetTitleSize(0.04);
    gaussianGraph->GetYaxis()->SetTitleFont(42);
    gaussianGraph->GetYaxis()->SetTitleSize(0.04);

    expectedGraph->Draw("AL");
    gaussianGraph->Draw("L same");
    legend->Draw();

    // Salvataggio del canvas su file
    std::string outputFilename = "time_distribution_" + filename + ".png";
    canvas->SaveAs(outputFilename.c_str());

    // Pulizia della memoria
    delete gaussianGraph;
    delete expectedGraph;
    delete legend;
    delete canvas;
}

int main() {
    std::vector<std::string> filenames = {
        "T_smear_0_800.txt", "T_smear_24044_1000.txt",
        "T_smear_26539_2000.txt",
        "T_smear_41806_4000.txt", "T_smear_44519_2000.txt",
        "T_smear_5275_2800.txt", "T_smear_57_63.txt",
        "T_smear_67_150.txt", "T_smear_86_22.txt",
        "T_smear_4000.txt","T_smear_2922.txt","T_smear_119.txt","T_smear_325.txt","T_smear_723.txt","T_smear_853.txt","T_smear_1122.txt","T_smear_29824.txt","T_smear_12392.txt"
    };

    std::vector<double> N;
    std::vector<double> tot_l;
    std::vector<double> tot_h;

    for (const std::string& filename : filenames) {
        processFile(filename, N, tot_l, tot_h);
    }

    // Creazione del grafico usando ROOT
    TGraph *gr_low = new TGraph(N.size(), N.data(), tot_l.data());
    TGraph *gr_high = new TGraph(N.size(), N.data(), tot_h.data());

    // Creazione di una tela per il disegno del grafico
    TCanvas *c1 = new TCanvas("c1", "N vs ToT", 800, 600);

    // Disegna il primo grafico
    gr_low->SetTitle("ToT as function of photoelectrons ;# pe;ToT (ns)");
    gr_low->SetMarkerStyle(20); // Imposta lo stile dei punti
    gr_low->SetMarkerColor(kBlue);
    gr_low->GetYaxis()->SetRangeUser(0,20);
    gr_low->GetXaxis()->SetRangeUser(0, 2500);
    gr_low->Draw("AP");

    // Disegna il secondo grafico sullo stesso canvas
    gr_high->SetMarkerStyle(21); // Imposta lo stile dei punti
    gr_high->SetMarkerColor(kOrange);
    gr_high->Draw("P same");

    // Aggiungi legenda
    TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(gr_low, "Low Threshold ToT", "p");
    legend->AddEntry(gr_high, "High Threshold ToT", "p");
    legend->Draw();

    // Esegui il fitting dei dati
    TF1 *fit_low = new TF1("fit_low", "pol2", 0, 2500); // Fitting con un polinomio di secondo grado
    TF1 *fit_high = new TF1("fit_high", "pol2", 0, 2500);

    gr_low->Fit(fit_low, "R");
    gr_high->Fit(fit_high, "R");

    // Aggiungi le funzioni di fit al grafico
    fit_low->SetLineColor(kRed);
    fit_low->SetLineWidth(2);
    fit_low->Draw("same");

    fit_high->SetLineColor(kGreen);
    fit_high->SetLineWidth(2);
    fit_high->Draw("same");

    // Salva il grafico in un file
    c1->SaveAs("N_vs_ToT_with_fit.png");

    // Pulizia della memoria
    delete gr_low;
    delete gr_high;
    delete fit_low;
    delete fit_high;
    delete c1;

    return 0;
}

