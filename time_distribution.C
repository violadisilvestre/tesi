#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <map>
#include "TH1F.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TGraph.h"

// Funzione per generare numeri casuali distribuiti gaussianamente
double generateGaussian(double mean, double sigma, std::mt19937 &gen) {
    std::normal_distribution<double> distribution(mean, sigma);
    return distribution(gen);
}

// Funzione da plottare sopra agli istogrammi
double myFunction(double x) {
    double tau=3.08;
    double a =0.588;
    double num=std::pow(x/tau,(1/a)-1);
    double den=tau*a*std::pow(1+std::pow(x/tau,1/a),2);	      
    return num/den;
}

int main() {
    // Apertura del file e lettura dei dati
    std::ifstream file("dati.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file!" << std::endl;
        return 1;
    }

    std::vector<double> time;
    std::string lineString;
    while (std::getline(file, lineString)) {
        double value = std::stod(lineString);
        time.push_back(value);
    }
    file.close();

    // Trova il valore minimo per la traslazione
    double minTime = *std::min_element(time.begin(), time.end());

    // Mescola il vettore time in modo casuale
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(time.begin(), time.end(), g);

    // Creazione dell'istogramma 'sumHistogram'
    TH1F* sumHistogram = new TH1F("sumHistogram", "Sum of Normalized Histograms", 400, 0, 150);
    sumHistogram->SetFillColor(kBlue);
    sumHistogram->SetXTitle("time [ns]");
    sumHistogram->SetYTitle("Normalized Counts"); // Update the y-axis title

    double sigma = 0.35;
    std::sort(time.begin(), time.end());
    for (int i = 0; i < time.size(); ++i) {
        double mean = time[i] - minTime;
        TH1F* histogram = new TH1F("histogram", "Normalized Histogram", 400, 0, 150);

        for (int j = 0; j < 1000; ++j) {
            histogram->Fill(generateGaussian(mean, sigma, g));
        }

        histogram->Scale(1.0 / 1000); // Normalize the histogram
        sumHistogram->Add(histogram);
        delete histogram;
    }

    // Creazione dell'istogramma 'realHistogram'
    TH1F* realHistogram = new TH1F("realHistogram", "Time Distribution", 80, 0, 20);
    realHistogram->SetFillColor(kViolet);
    realHistogram->SetXTitle("time [ns]");
    realHistogram->SetYTitle("Normalized Counts"); // Update the y-axis title

    for (int i = 0; i < time.size(); ++i) {
         realHistogram->Fill(time[i]-minTime);
    }

    // Normalization factor for realHistogram
    double normalizationFactorReal = 1.0 / realHistogram->Integral();
    realHistogram->Scale(normalizationFactorReal);

    // Normalization factor for sumHistogram
    double normalizationFactorSum = 1.0 / sumHistogram->Integral();
    sumHistogram->Scale(normalizationFactorSum);

    double F[time.size()];
    double x[time.size()];
    for (int i = 0; i < time.size(); ++i) {
        F[i] = myFunction(time[i]-minTime);
        x[i]=time[i]-minTime;
    }

    TGraph *graph = new TGraph(time.size(), x, F);

    // Creazione dei canvas e disegno degli istogrammi
    TCanvas *canvasSumHist = new TCanvas("canvasSumHist", "Sum of Normalized Histograms", 800, 600);
    sumHistogram->Draw("hist");
    graph->Draw("same");

    TCanvas *canvasRealHist = new TCanvas("canvasRealHist", "Time Distribution", 800, 600);
    realHistogram->Draw("hist");
    graph->Draw("same");
  
    // Salva i canvas degli istogrammi su file
    canvasSumHist->SaveAs("time_distribution_sum.pdf");
    canvasRealHist->SaveAs("time_distribution_real.pdf");

    return 0;
}

