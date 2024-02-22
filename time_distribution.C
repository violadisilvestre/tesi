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
    std::ifstream file("dati2.txt");
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

    // Mescola il vettore time in modo casuale
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(time.begin(), time.end(), g);

    // Creazione dell'istogramma di somma
    TH1F* sumHistogram = new TH1F("sumHistogram", "Sum of Normalized Histograms", 400, 50, 100);

    sumHistogram->SetFillColor(kBlue);
    sumHistogram->SetXTitle("time [ns]");
    sumHistogram->SetYTitle("Voltage [V]");

    // Seleziona i primi n eventi dal vettore time (o meno se il vettore ha meno di n elementi)
    int numEventsToSelect = std::min(100, static_cast<int>(time.size()));

    // Creazione di gaussiane solo per gli eventi selezionati in modo casuale
    double sigma = 0.35;

    for (int i = 0; i < numEventsToSelect; ++i) {
        double mean = time[i];
        TH1F* histogram = new TH1F("histogram", "Normalized Histogram", 400, 50, 100);

        // Riempimento e normalizzazione dell'istogramma corrente
        for (int j = 0; j < 100000; ++j) {
            histogram->Fill(generateGaussian(mean, sigma, g));
        }

        histogram->Scale(1.0 /100000);

        // Aggiungi i contenuti dell'istogramma corrente a sumHistogram
        sumHistogram->Add(histogram);

        delete histogram; // Liberazione della memoria dall'istogramma corrente
    }

    // Creazione del canvas e disegno dell'istogramma
    TCanvas *canvasHist = new TCanvas("canvasHist", "canvasHist", 800, 600);
    sumHistogram->Draw("hist");

    // Trova il bin corrispondente al massimo dell'istogramma
    int binMax = sumHistogram->GetMaximumBin();
    double xMax = sumHistogram->GetXaxis()->GetBinCenter(binMax);
    double yMax = sumHistogram->GetBinContent(binMax);

    // Disegna una linea passante per il massimo dell'istogramma
    TF1 *line = new TF1("line", "pol1", 50, 100); // Interpolazione lineare
    line->SetParameters(yMax, -0.02); // Valori iniziali per la pendenza e l'intercetta
    line->SetLineColor(kRed);
    line->Draw("same");

    // Salva l'istogramma su un file
    sumHistogram->SaveAs("time_distribution_all_hist.root");

    // Salva il canvas dell'istogramma su un file
    canvasHist->SaveAs("time_distribution_all.png");
    canvasHist->Print("time_distribution_all.pdf");
    canvasHist->Draw();

    // Creazione del canvas per il plot
    TCanvas *canvasPlot = new TCanvas("canvasPlot", "canvasPlot", 800, 600);

    // Disegna il plot sul nuovo canvas
    // Aggiungi qui il codice per disegnare il plot
    // Ad esempio:
     TF1 *plot = new TF1("plot", "x", 50, 100);
     plot->Draw();

    // Salva il canvas del plot su un file
    canvasPlot->SaveAs("time_distribution_plot.png");
    canvasPlot->Print("time_distribution_plot.pdf");
    canvasPlot->Draw();

    return 0;
}

