#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "TCanvas.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TAxis.h"

int main() {
    // Apertura del file e lettura dei dati
    std::ifstream file("ToT_results.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file!" << std::endl;
        return 1;
    }
    std::vector<double> N;
    std::vector<double> tot_l;
    // std::vector<double> tot_h;
    std::string lineString;
    while (std::getline(file, lineString)) {
        std::istringstream iss(lineString);
        double nValue, totValue_l;

        if (!(iss >> nValue >> totValue_l)) {
            std::cerr << "Error reading line: " << lineString << std::endl;
            continue; // skip the invalid line
        }

        N.push_back(nValue);
        tot_l.push_back(totValue_l);
        //tot_h.push_back(totValue_h);
    }
    file.close();

    // Creazione del grafico usando ROOT
    TGraph *gr1 = new TGraph(N.size(), N.data(), tot_l.data());
    // TGraph *gr2 = new TGraph(N.size(), N.data(), tot_h.data());

    // Creazione di una tela per il disegno del grafico
    TCanvas *c1 = new TCanvas("c1", "N vs ToT", 800, 600);

    // Disegna il primo grafico
    gr1->SetTitle("ToT as function of photoelectrons ;# pe;ToT (ns)");
    gr1->SetMarkerStyle(20); // Imposta lo stile dei punti
    gr1->SetMarkerColor(4);
    gr1->GetYaxis()->SetRangeUser(0, 13);
    gr1->Draw("AP"); // "AP" indica che devono essere disegnati sia i punti che gli assi

    // Disegna il secondo grafico
    /* gr2->SetMarkerStyle(20); // Imposta lo stile dei punti
    gr2->SetMarkerColor(800);
    gr2->Draw("P SAME"); // "P SAME" indica che devono essere disegnati i punti sullo stesso canvas
    
    // Aggiungi una legenda
    TLegend *legend = new TLegend(0.7, 0.8, 0.9, 0.9); // Imposta la posizione della legenda
    legend->AddEntry(gr1, "tot_l", "p");
    legend->AddEntry(gr2, "tot_h", "p");
    legend->Draw();*/

    // Mostra la tela
    c1->Update();
    c1->SaveAs("N_vs_ToT.pdf"); // Salva il grafico come immagine

    return 0;
}
