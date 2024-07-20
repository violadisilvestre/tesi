#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <TH1F.h> 
#include <TText.h>
#include "TCanvas.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TAxis.h"
#include "TF1.h"
#include "TRandom3.h"
#include <TGraphErrors.h>
// Definizione delle costanti
const double SATURATION_LIMIT = 2700;
const int NUM_POINTS = 10000;
const double GAUSSIAN_STDDEV = 0.8;

// Funzione gaussiana
double gaussian(double x, double mean, double stddev) {
    return (1.0 / (stddev * sqrt(2.0 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
}

// Somma di gaussiane
double Gaussian_sum(double x, const std::vector<double>& times, double tpe,double tau) {
    double G = 0;
    for (double t : times) {
        double gaussian_value = gaussian(x, t, GAUSSIAN_STDDEV);
        double exponential_part = exp(-(x-t)/tau);
        G += gaussian_value * exponential_part;
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
void processFile(const std::string& filename, std::vector<double>& N, std::vector<double>& tot_l, std::vector<double>& tot_h,int graph) {
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
    std::uniform_real_distribution<double> distributionX(-8, 20);
    std::uniform_real_distribution<double> distributionY(0, 20);

    for (int i = 0; i < NUM_POINTS; ++i) {
        x[i] = distributionX(generator);
        y[i] = distributionY(generator);
    }

    // Ordinamento dei dati x
    std::sort(x.begin(), x.end());
    std::sort(y.begin(),y.end());
    // Calcolo delle funzioni G e F
    std::vector<double> G(NUM_POINTS), F(NUM_POINTS);
    for (int i = 0; i < NUM_POINTS; ++i) {
      G[i] = Gaussian_sum(x[i], times,0.8,8);
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
    const double low_thr = 10.0;

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
    }

    double ToT_high = time_stop_high - time_start_high;
    if (ToT_high <= 0) ToT_high = -1;
    tot_h.push_back(ToT_high);

    N.push_back(times.size());
    if (graph==1){
      // Creazione dei grafici
      TGraph* gaussianGraph = new TGraph(NUM_POINTS, x.data(), G.data());
      // TGraph* expectedGraph = new TGraph(NUM_POINTS, y.data(), F.data());
      
      gaussianGraph->SetLineColor(kMagenta);
      gaussianGraph->SetLineWidth(2);
      gaussianGraph->GetXaxis()->SetLimits(-4, 15); 
      /*expectedGraph->SetLineColor(kYellow);
	expectedGraph->SetLineWidth(2);
      
      TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
      legend->AddEntry(gaussianGraph, "Simulated distribution", "l");
      legend->AddEntry(expectedGraph, "Expected distribution", "l");*/
      
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
    
      gaussianGraph->Draw("AL");
      //expectedGraph->Draw("L same");
      //legend->Draw();
      
      // Salvataggio del canvas su file
      std::string outputFilename = "TTS_0.8_exp0.8_tau_8_" + filename + ".png";
      canvas->SaveAs(outputFilename.c_str());
      
      // Pulizia della memoria
      delete gaussianGraph;
      //delete expectedGraph;
      // delete legend;
      delete canvas;
    }
};



int main() {
  std::vector<std::string> filenames = { "T_smear_1.txt","T_smear_10.txt","T_smear_2.txt","T_smear_3.txt","T_smear_5.txt", "T_smear_6.txt", "T_smear_9.txt", "T_smear_14.txt", "T_smear_15.txt","T_smear_16.txt" ,"T_smear_12392.txt","T_smear_119.txt", "T_smear_16573.txt","T_smear_31027.txt","T_smear_54376.txt","T_smear_71004.txt","T_smear_24044_1000.txt","T_smear_26539_2000.txt","T_smear_1000.txt","T_smear_100.txt"
};


    std::vector<double> N;
std::vector<double> tot_l;
std::vector<double> tot_h;

for (const std::string& filename : filenames) {
  processFile(filename, N, tot_l, tot_h,1);
}

// Filtraggio dei valori negativi
/*std::vector<double> N_filtered, N_filtered_h,tot_l_filtered, tot_h_filtered;
for (int i = 0; i < N.size(); ++i) {
      std::cout<<"file:"<<i+1<<" N:"<<N[i]<<" ToT_l:"<<tot_l[i]<<std::endl;
if (tot_l[i] >= 0 && N[i]<=2700) {
            N_filtered.push_back(N[i]);
            tot_l_filtered.push_back(tot_l[i]);
        }
        if (tot_h[i] >= 0 && N[i]<=2700) {
            N_filtered_h.push_back(N[i]);
            tot_h_filtered.push_back(tot_h[i]);
        }
    }

  // Definire la risoluzione del picotdc in secondi (convertito da ps)
const double resolution = 0.003125; // 3.125 ps in secondi

// Creazione dei vettori per le incertezze
std::vector<double> tot_l_errors(tot_l_filtered.size(), resolution);
std::vector<double> N_errors(tot_l_filtered.size(), 0); // Supponiamo che le incertezze su N siano nulle per semplicità

std::vector<double> tot_h_errors(tot_h_filtered.size(), resolution);
//std::vector<double> N_errors_h(tot_h_filtered.size(), 0); // Supponiamo che le incertezze su N siano nulle per semplicità

// Creazione del grafico usando TGraphErrors
TGraph *gr_low = new TGraph(tot_l_filtered.size(), tot_l_filtered.data(), N_filtered.data());
TGraph *gr_high = new TGraph(tot_h_filtered.size(), tot_h_filtered.data(), N_filtered_h.data());

// Creazione di una tela per il disegno del grafico
TCanvas *c1 = new TCanvas("c1", "N vs ToT", 800, 600);
c1->SetGrid();

// Disegna il primo grafico
gr_low->SetTitle("Calibration curve ;ToT (ns);Amplitude (mV)");
gr_low->SetMarkerStyle(20); // Imposta lo stile dei punti
gr_low->SetMarkerSize(1.1);
gr_low->SetMarkerColor(kBlue);
gr_low->GetYaxis()->SetLimits(0.0, 1800); // Aumenta l'intervallo dell'asse y
gr_low->GetXaxis()->SetLimits(1.5, 18.0);
gr_low->Draw("AP");

// Disegna il secondo grafico sullo stesso canvas
gr_high->SetMarkerStyle(20); // Imposta lo stile dei punti
gr_high->SetMarkerSize(1.1);
gr_high->SetMarkerColor(kOrange);
gr_high->Draw("P same");

// Aggiungi legenda
TLegend *legend = new TLegend(0.1, 0.7, 0.3, 0.9);
legend->AddEntry(gr_low, "Low Threshold ToT", "p");
legend->AddEntry(gr_high, "High Threshold ToT", "p");
legend->Draw();

// Esegui il fitting dei dati
TF1 *fit_low = new TF1("fit_low","pol3", 0, 16); // Fitting con un polinomio di terzo grado
TF1 *fit_high = new TF1("fit_high", "pol3", 0, 16);

gr_low->Fit(fit_low, "R");
gr_high->Fit(fit_high, "R");

// Aggiungi le funzioni di fit al grafico
fit_low->SetLineColor(kBlue);
fit_low->SetLineWidth(2);
fit_low->Draw("same");

fit_high->SetLineColor(kOrange);
fit_high->SetLineWidth(2);
fit_high->Draw("same");

// Salva il grafico in un file
c1->SaveAs("voglio_morire5.png");

// Pulizia della memoria
delete gr_low;
delete gr_high;
delete c1;
    
    //GENERO GLI EVENTI PER LA RISOLUZIONE
    std::vector<double> N_evt;
    std::vector<double> tot_l_evt;
    std::vector<double> tot_h_evt;*/
    /* for (int i=0; i<100;i++) {
      processFile("T_smear_test.txt", N_evt, tot_l_evt, tot_h_evt,0);
    }*/
    // Ottieni i parametri dal fit
/* double par0 = fit_low->GetParameter(0);
    double par1 = fit_low->GetParameter(1);
    double par2 = fit_low->GetParameter(2);
    double par3 = fit_low->GetParameter(3);
    std::vector<double> A_l, A_h;*/
    /*  for (int i = 0; i < N_evt.size(); ++i) {
      //std::cout<<N_evt[i]<< " "<<tot_l_evt[i]<<std::endl;
      double A=par0+par1*tot_l_evt[i]+par2*pow(tot_l_evt[i],2)+par3*pow(tot_l_evt[i],3);
      // std::cout<<A<<std::endl;
      A_l.push_back(A);
      std::cout<<A_l[i]<<std::endl;
    }
    // Crea un canvas
    TCanvas *c2 = new TCanvas("c2", "Amplitude histogram", 800, 600);
    
    // Crea un istogramma
    TH1F *hist = new TH1F("hist", "Amplitude histogram", 30, 140, 170);
    
    // Riempie l'istogramma con i dati
    for(double value : A_l) {
        hist->Fill(value);
	}*/
    
    /* // Definisce la funzione di fit Gaussiano
    TF1 *gaus = new TF1("gaus", "gaus", 700, 1000);
    
    // Esegue il fit Gaussiano
    hist->Fit("gaus");
    
    // Ottiene i parametri del fit
    double A = gaus->GetParameter(0);
    double mu = gaus->GetParameter(1);
    double sigma = gaus->GetParameter(2);*/
    
    // Disegna l'istogramma
    // hist->Draw();
    //std::cout<<mu<< " "<< sigma<< " "<< N_evt[0]<<std::endl;
    // Aggiunge il numero di eventi e i parametri del fit sul grafico
    /* TText *text = new TText();
    text->SetNDC();
    text->SetTextSize(0.03);
    text->DrawText(0.1, 0.85, Form("N_evt = %d", static_cast<int>(N_evt[0])));
    text->DrawText(0.1, 0.80, Form("A = %.2f", A));
    text->DrawText(0.1, 0.75, Form("mu = %.2f", mu));
    text->DrawText(0.1, 0.70, Form("sigma = %.2f", sigma));*/
    
    /*   // Aggiunge una legenda
    TLegend *legend2 = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend2->AddEntry(hist, "Dati", "l");
    //legend2->AddEntry(gaus, "Fit Gaussiano", "l");
    legend2->Draw();
    
    // Salva il canvas come immagine
    c2->SaveAs("histogram_fit_test.png");
     // Cleanup
   
     delete hist;*/
    

  return 0;
}
