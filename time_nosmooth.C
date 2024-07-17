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
// Funzione per processare un file e generare i grafici
void processFile(const std::string& filename, std::vector<double>& N) {
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
     // Crea un canvas
    TCanvas *canvas = new TCanvas("c2", "Pe histogram", 800, 600);
    
    // Crea un istogramma
    TH1F *hist = new TH1F("hist", "Pe histogram", 30, 0, 20);
    
    // Riempie l'istogramma con i dati
    for(double value :times) {
        hist->Fill(value);
	}
    
    hist->Draw();
      
      // Salvataggio del canvas su file
      std::string outputFilename = "histo_pe" + filename + ".png";
      canvas->SaveAs(outputFilename.c_str());
      
      delete hist;
      delete canvas;
    }
int main() {
  std::vector<std::string> filenames = { "T_smear_1.txt", "T_smear_14.txt", "T_smear_15.txt","T_smear_16.txt"
};
  
  std::vector<double> N;
  std::vector<double> tot_l;
  std::vector<double> tot_h;
  
  for (const std::string& filename : filenames) {
    processFile(filename, N);
  }
  return 0;
}
