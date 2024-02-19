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

    // Seleziona i primi n eventi dal vettore time (o meno se il vettore ha meno di n elementi)
    int numEventsToSelect = std::min(500, static_cast<int>(time.size()));

    double minTime = *std::min_element(time.begin(), time.end());
    double maxTime = minTime + 1.0; 

    std::vector<double> selectedTimes;
    for (int i = 0; i < time.size() && selectedTimes.size() < numEventsToSelect; ++i) {
        if (time[i] < maxTime ) {
            selectedTimes.push_back(time[i]);
        }
    }

    // Creazione di gaussiane solo per gli eventi selezionati in modo casuale
    double sigma = 0.01; // Larghezza della gaussiana
    std::vector<std::pair<double, double>> sumGaussians; // Vettore per memorizzare coppie (x, y) delle gaussiane generate
    for (int i = 0; i < selectedTimes.size(); ++i) {
        double mean = selectedTimes[i]; // Media della gaussiana
        double randomValue = generateGaussian(mean, sigma, g); // Genera un valore gaussiano
        sumGaussians.push_back(std::make_pair(mean, randomValue)); // Memorizza la coppia (x, y) nel vettore di somma
    }

    // Calcola la somma dei conteggi delle gaussiane per le stesse x
    std::map<double, double> sumByX; // Mappa per memorizzare la somma dei conteggi delle gaussiane per le stesse x
    for (const auto& point : sumGaussians) {
        double x = point.first;
        double y = point.second;
        sumByX[x] += y; // Somma i conteggi delle gaussiane per le stesse x
    }

    double minX = std::numeric_limits<double>::max();
    double maxX = -std::numeric_limits<double>::max();
    double maxY = -std::numeric_limits<double>::max();
    for (const auto& pair : sumByX) {
        double x = pair.first;
        double y = pair.second;
        minX = std::min(minX, x);
        maxX = std::max(maxX, x);
        maxY=std::max(maxY,y);
    }
    TH1F *histogram = new TH1F("histogram", "time distribution", 150, 0, 70);
    histogram->SetFillColor(kBlue); // Imposta il colore di riempimento dell'istogramma a rosso
    histogram->SetXTitle("time [ns]"); // Imposta l'etichetta dell'asse x
    histogram->SetYTitle("Counts"); // Imposta l'etichetta dell'asse y

    // Riempimento dell'istogramma
    for (const auto& pair : sumByX) {
        double x = pair.first;
        double y = pair.second;
        histogram->Fill(x-minX, y); // Aggiunge il conteggio delle gaussiane all'istogramma
    }

    // Creazione del canvas e disegno dell'istogramma
    TCanvas *canvas = new TCanvas("canvas", "canvas", 800, 600);
    histogram->Draw("hist"); 

    // Salva l'istogramma su un file o visualizzalo a schermo
    canvas->SaveAs("time_distribution.png"); // Salva l'istogramma come immagine
    canvas->Print("time_distribution.pdf"); // Salva l'istogramma come file PDF
    canvas->Draw(); // Visualizza l'istogramma a schermo

    return 0;
}


