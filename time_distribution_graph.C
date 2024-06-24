#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <algorithm>
#include <numeric>
#include "TH1F.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TRandom3.h"

// Definizione delle costanti
const double SATURATION_LIMIT = 2700;
const int NUM_POINTS = 10000;
const double GAUSSIAN_STDDEV = 0.65;

// Funzione gaussiana
double gaussian(double x, double mean, double stddev) {
    return (1.0 / (stddev * sqrt(2.0 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
}

// Somma di gaussiane
double Gaussian_sum(double x, const std::vector<double>& times) {
    double G = 0;
    for (double t : times) {
        G += gaussian(x, t, GAUSSIAN_STDDEV) * exp(-1 * x);
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
void processFile(const std::string& filename) {
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
    std::string outputFilename = "time_distribution_" + filename + ".pdf";
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
        "T_smear_26539_2000.txt", "T_smear_2922_1000.txt",
        "T_smear_41806_4000.txt", "T_smear_44519_2000.txt",
        "T_smear_5275_2800.txt", "T_smear_57_63.txt",
        "T_smear_67_150.txt", "T_smear_86_22.txt", 
        "T_smear_4000.txt"
    };

    for (const std::string& filename : filenames) {
        processFile(filename);
    }

    return 0;
}


