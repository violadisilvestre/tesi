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
  std::ifstream file("dati.txt");
  if (!file.is_open()) {
    std::cerr << "Impossibile aprire il file!" << std::endl;
    return 1;
  }
  
  std::vector<double> time; // Utilizzo di un vector invece di un array per gestire la dimensione dinamicamente
  std::string line;
  while (std::getline(file, line)) {
    // Converti la stringa in double e aggiungila al vector
    double value = std::stod(line);
    time.push_back(value);
  }
  
  // Mescola il vettore time in modo casuale
  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(time.begin(), time.end(), g);
  
  TH1F *histogram = new TH1F("histogram", "time distribution", 400, 55, 100);
  histogram->SetFillColor(kBlue); // Imposta il colore di riempimento dell'istogramma a rosso
  histogram->Fill(time);
  histogram->SetXTitle("time [ns]"); // Imposta l'etichetta dell'asse x
  histogram->SetYTitle("Counts"); // Imposta l'etichetta dell'asse y
  // Seleziona i primi n eventi dal vettore time (o meno se il vettore ha meno di n elementi)
  /*    int numEventsToSelect = std::min(500, static_cast<int>(time.size()));
	
  // Creazione di gaussiane solo per gli eventi selezionati in modo casuale
  double sigma =0.35;
  for (int i = 0; i < numEventsToSelect; ++i) {
  double mean = time[i];
  for (int j = 0; j < 1000; ++j) {
  histogram->Fill(generateGaussian(mean, sigma, g));
  }
  }*/
  
  // Creazione del canvas e disegno dell'istogramma
  TCanvas *canvas = new TCanvas("canvas", "canvas", 800, 600);
  histogram->Draw("hist"); 
  
  // Salva l'istogramma su un file o visualizzalo a schermo
  canvas->SaveAs("time_distribution.png"); // Salva l'istogramma come immagine
  canvas->Print("time_distribution.pdf"); // Salva l'istogramma come file PDF
  canvas->Draw(); // Visualizza l'istogramma a schermo 
  
  return 0;
  
}
