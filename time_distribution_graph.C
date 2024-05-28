#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <algorithm>
#include <numeric>
#include "TH1F.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TRandom3.h"

double gaussian(double x, double mean, double stddev) {
    return (1.0 / (stddev * sqrt(2.0 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
}

double Gaussian_sum(double x, std::vector<double> t) {
    double G = 0;
    for (int i = 0; i < t.size(); i++) {
        G += gaussian(x, t[i], 0.35) + exp(-0.25 * x);
    }
    return G;
}

double myFunction(double x, int dim) {
    double tau = 3.08;
    double a = 0.588;
    double num = std::pow(x / tau, (1 / a) - 1);
    double den = tau * a * std::pow(1 + std::pow(x / tau, 1 / a), 2);

    // Gaussian parameters
    double mu = 0.0;  // Center of the Gaussian
    double sigma = 1.0;  // Standard deviation of the Gaussian

    // Calculate the Gaussian smearing factor
    double gaussian = 1 / (sigma * std::sqrt(2 * M_PI)) * std::exp(-0.5 * std::pow((x - mu) / sigma, 2));

    // Multiply the original function value with the Gaussian smearing factor
    return dim * (num / den) + gaussian;
}

double integrate(double x[], double y[],int num) {
    double area = 0.0;
    for (size_t i = 1; i <num; ++i) {
        double dx = x[i] - x[i - 1];
        double avg_height = (y[i] + y[i - 1]) / 2.0;
        area += dx * avg_height;
    }
    return area;
}

int main() {

    const int x_max = 25;
    const int num = 10000;
    const double sat = 2700;

    // Apertura del file e lettura dei dati
    std::ifstream file("T_max_data.txt");
    if (!file.is_open()) {
        std::cerr << "Impossibile aprire il file!" << std::endl;
        return 1;
    }
    TRandom3 rand(0);
    std::vector<double> time;
    std::string lineString;
    while (std::getline(file, lineString)) {
        double value = std::stod(lineString);
        time.push_back(value);
    }
    file.close();
    
    // Trova il valore minimo per la traslazione
    double minTime = *std::min_element(time.begin(), time.end());
    for (double& t : time) {
        t -= minTime;
    }

    double x[num];
    double y[num];
    double F[num];
    double G[num];
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(-1, 20);
    std::uniform_real_distribution<double> d(0, 20);
    
    for (int i = 0; i < num; ++i) {
        x[i] = distribution(generator);
        y[i] = d(generator);
    }
    std::sort(x, x + num); // Sorting x in ascending order
    std::sort(y, y + num);
    for (int i = 0; i < num; ++i) {
      // double gaussian_sum
	   G[i] = Gaussian_sum(x[i], time);
	   F[i] = myFunction(y[i], time.size());
    }

     // Normalizzazione delle aree
    double areaG = integrate(x, G,num);
    double areaF = integrate(y, F,num);

    double scaleG = time.size() / areaG;
    double scaleF = time.size() / areaF;

    for (int i = 0; i < num; ++i) {
        G[i]= G[i]*scaleG;
        F[i]= F[i]*scaleF;
	if (G[i]<sat){
	  G[i]=G[i];

	}
	else {
	  G[i]=sat;
	  }
	x[i]=x[i]-x[0];
    }


    TGraph *gaussian = new TGraph(num, x, G);
    TGraph *graph = new TGraph(num, y, F);
    TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9); 
    legend->AddEntry(gaussian, "Simulated distribution", "l");
    legend->AddEntry(graph, "Expected distribution", "l");
    graph->SetLineWidth(2);
    graph->SetLineColor(kYellow);
    gaussian->SetLineColor(kMagenta);
    gaussian->SetLineWidth(2);

    // Set the labels and title
    gaussian->GetXaxis()->SetTitle("Time [ns]"); 
    gaussian->GetYaxis()->SetTitle("# Photoelectrons"); 
    gaussian->SetTitle("Time Distribution"); 
    
    // Adjust font and size if needed
    gaussian->GetXaxis()->SetTitleFont(42);
    gaussian->GetXaxis()->SetTitleSize(0.04);
    gaussian->GetYaxis()->SetTitleFont(42);
    gaussian->GetYaxis()->SetTitleSize(0.04);

    // Set the x-axis range for both graphs
    //gaussian->GetXaxis()->SetLimits(-1, 35);
    //graph->GetXaxis()->SetLimits(-1, 35);

    // Creazione dei canvas e disegno degli istogrammi
    TCanvas* canvasSumHist = new TCanvas("canvasSumHist", "Photoelectron time distribution", 800, 600);
    canvasSumHist->SetGrid();
    gaussian->Draw("AL");
    graph->Draw("L same");
    
    legend->Draw(); 

    // Salva i canvas degli istogrammi su file
    canvasSumHist->SaveAs("time_distribution_smeared.pdf");

    return 0;
}
