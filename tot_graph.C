#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include "TH1F.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TRandom3.h"

int main() {
    // Apertura del file e lettura dei dati
    std::ifstream file("ToT_results.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file!" << std::endl;
        return 1;
    }
    std::vector<double> N;
    std::vector<double> tot;
    std::string lineString;
    while (std::getline(file, lineString)) {
        std::istringstream iss(lineString);
        double nValue, totValue;

        if (!(iss >> nValue >> totValue)) {
            std::cerr << "Error reading line: " << lineString << std::endl;
            continue; // skip the invalid line
        }

        N.push_back(nValue);
        tot.push_back(totValue);
    }
    file.close();

    // Creazione del grafico usando ROOT
    TGraph *gr1 = new TGraph(N.size(), N.data(), tot.data());

    // Creazione di una tela per il disegno del grafico
    TCanvas *c1 = new TCanvas("c1", "N vs ToT", 800, 600);

    // Disegna il grafico
    gr1->SetTitle("Scatter Plot of N vs ToT;N;ToT");
    gr1->SetMarkerStyle(20); // Imposta lo stile dei punti
    gr1->Draw("AP"); // "AP" indica che devono essere disegnati sia i punti che gli assi

    // Mostra la tela
    c1->Update();
    c1->SaveAs("N_vs_ToT.png"); // Salva il grafico come immagine

    return 0;
}
