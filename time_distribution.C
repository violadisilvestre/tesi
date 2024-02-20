#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <map>
#include "TH1F.h"
#include "TCanvas.h"

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
    std::string line;
    while (std::getline(file, line)) {
        double value = std::stod(line);
        time.push_back(value);
    }

    // Chiusura del file dopo la lettura
    file.close();

    // Mescola il vettore time in modo casuale
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(time.begin(), time.end(), g);

    // Creazione dell'istogramma di somma
    //TH1F* sumHistogram = new TH1F("sumHistogram", "Sum of Normalized Histograms", 400, 58, 100);
    TH1F* histogram = new TH1F("sumHistogram", "Sum of Normalized Histograms", 400, 58, 100);

    histogram->SetFillColor(kBlue);
    histogram->SetXTitle("time [ns]");
    histogram->SetYTitle("Voltage [V]");

    // Seleziona i primi n eventi dal vettore time (o meno se il vettore ha meno di n elementi)
    int numEventsToSelect = std::min(500, static_cast<int>(time.size()));

    // Creazione di gaussiane solo per gli eventi selezionati in modo casuale
    double sigma = 0.35;

    for (int i = 0; i < numEventsToSelect; ++i) {
        double mean = time[i];
        //TH1F* histogram = new TH1F("histogram", "Normalized Histogram", 400, 58, 100);

        // Riempimento e normalizzazione dell'istogramma corrente
        for (int j = 0; j < 1000; ++j) {
            histogram->Fill(generateGaussian(mean, sigma, g));
        }
        /*double integral = histogram->Integral();
        histogram->Scale(1.0 / integral);

        // Riempimento dell'istogramma di somma con l'istogramma normalizzato
        for (int bin = 1; bin <= histogram->GetNbinsX(); ++bin) {
            double binContent = histogram->GetBinContent(bin);
            double sumBinContent = sumHistogram->GetBinContent(bin);
            sumHistogram->SetBinContent(bin, sumBinContent + binContent);
        }

        delete histogram; */ // Liberazione della memoria dall'istogramma corrente
    }

    // Creazione del canvas e disegno dell'istogramma
    TCanvas *canvas = new TCanvas("canvas", "canvas", 800, 600);
    histogram->Draw("hist");

    // Salva l'istogramma su un file o visualizzalo a schermo
    canvas->SaveAs("time_distribution_all.png");
    canvas->Print("time_distribution_all.pdf");
    canvas->Draw();

    return 0;
}

