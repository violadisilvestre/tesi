#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
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

    // Seleziona i primi 100 eventi dal vettore time (o meno se il vettore ha meno di 100 elementi)
    int numEventsToSelect = std::min(100, static_cast<int>(time.size()));

    // Creazione di gaussiane solo per gli eventi selezionati in modo casuale
    double sigma = 1.0; // Larghezza della gaussiana
    std::vector<double> sumGaussians(numEventsToSelect, 0.0); // Vettore per memorizzare la somma delle gaussiane
    for (int i = 0; i < numEventsToSelect; ++i) {
        double mean = time[i]; // Media della gaussiana
        double randomValue = generateGaussian(mean, sigma, g);
        sumGaussians[i] = randomValue; // Memorizza il valore gaussiano nel vettore di somma
    }

    // Calcola la somma di tutte le gaussiane generate
    double totalSum = 0.0;
    for (double value : sumGaussians) {
        totalSum += value;
    }

    // Creazione dell'istogramma con la somma delle gaussiane
    TH1F *histogram = new TH1F("histogram", "Somma delle Gaussiane", 100, totalSum - 5*sigma, totalSum + 5*sigma);
    for (double value : sumGaussians) {
        histogram->Fill(value);
    }

    // Disegna l'istogramma
    TCanvas *canvas = new TCanvas("canvas", "Canvas", 800, 600);
    histogram->Draw();
    canvas->SaveAs("time_distributiom.pdf");

    return 0;
}



