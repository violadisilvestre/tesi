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

// Funzione per generare numeri casuali distribuiti gaussianamente
double generateGaussian(double mean, double sigma, std::mt19937 &gen) {
    std::normal_distribution<double> distribution(mean, sigma);
    return distribution(gen);
}

int main() {
    // Apertura del file
    std::ifstream file("dati.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file!" << std::endl;
        return 1;
    }

    // Lettura dei dati dal file e inserimento in un vector
    std::vector<double> time;
    std::string lineString; // Rinominata la variabile 'line' in 'lineString'
    while (std::getline(file, lineString)) {
        double value = std::stod(lineString);
        time.push_back(value);
    }

    // Chiusura del file dopo la lettura
    file.close();

    // Trova il valore minimo per la traslazione
    double minTime = *std::min_element(time.begin(), time.end());

    // Mescola il vettore time in modo casuale
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(time.begin(), time.end(), g);

    // Creazione dell'istogramma di somma
    TH1F* sumHistogram = new TH1F("sumHistogram", "Sum of Normalized Histograms", 400, 0, 30);

    sumHistogram->SetFillColor(kBlue);
    sumHistogram->SetXTitle("time [ns]");
    sumHistogram->SetYTitle("Voltage [V]");

    // Seleziona i primi n eventi dal vettore time (o meno se il vettore ha meno di n elementi)
    int numEventsToSelect = std::min(500, static_cast<int>(time.size()));

    // Creazione di gaussiane solo per gli eventi selezionati in modo casuale
    double sigma = 0.35;

    for (int i = 0; i < numEventsToSelect; ++i) {
        double mean = time[i] - minTime; // Traslazione negativa per rimuovere l'offset
        TH1F* histogram = new TH1F("histogram", "Normalized Histogram", 400, 0, 30);

        // Riempimento e normalizzazione dell'istogramma corrente
        for (int j = 0; j < 100000; ++j) {
            histogram->Fill(generateGaussian(mean, sigma, g));
        }

        histogram->Scale(1.0 / 100000);

        // Aggiungi i contenuti dell'istogramma corrente a sumHistogram
        sumHistogram->Add(histogram);

        delete histogram; // Liberazione della memoria dall'istogramma corrente
    }

    // Creazione del canvas e disegno dell'istogramma
    TCanvas *canvasHist = new TCanvas("canvasHist", "canvasHist", 800, 600);
    sumHistogram->Draw("hist");

    // Salva l'istogramma su un file
    sumHistogram->SaveAs("time_distribution_all_hist.root");

    // Salva il canvas dell'istogramma su un file
    canvasHist->SaveAs("time_distribution_all.png");
    canvasHist->Print("time_distribution_all.pdf");
    canvasHist->Draw();

    return 0;
}
