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
#include "TGraph.h"
#include "TLegend.h"
#include "TRandom3.h"
double gaussian(double x, double mean, double stddev) {
    return (1.0 / (stddev * sqrt(2.0 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
}

double Gaussian_sum(double x,std::vector<double> t) {
  double G=0;
  for (int i=0; i< t.size(); i++){
    G=G+ gaussian(x,t[i],0.35);
  }
  return G;
}


// Funzione da plottare sopra agli istogrammi
double myFunction(double x,int dim) {
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

int main() {

   const int x_max=25;
   const int num=10000;
   const double sat=240;
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
    double maxTime = *std::max_element(time.begin(), time.end());
    for (int i = 0; i < time.size(); ++i) {
      
      time[i] =time[i]-minTime;
    }

    double F[num];
    double G[num];
    double x[num];
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0.0,maxTime-minTime);
    
    for (int i = 0; i < num; ++i) {
      
      x[i] =distribution(generator);
    }
    std::sort(x, x + num); // Sorting x in ascending order

    for (int i = 0; i < num; ++i) {
      if (Gaussian_sum(x[i], time)>sat){
	G[i]=sat;
      }
      else{
	G[i]=Gaussian_sum(x[i], time);
}
      F[i] = myFunction(x[i], time.size());
      
    }
    
    
    TGraph *gaussian = new TGraph(num, x, G);
    TGraph *graph = new TGraph(num, x, F);
    TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9); 
    legend->AddEntry(gaussian, "Simulated distribution", "l");
    legend->AddEntry(graph, "Expected distribution", "l");
    graph->SetLineWidth(2);
    graph->SetLineColor(kViolet);
    gaussian->SetLineColor(kGreen);
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


    // Creazione dei canvas e disegno degli istogrammi
    TCanvas *canvasSumHist = new TCanvas("canvasSumHist", "Photoelectron time distribution", 800, 600);
    gaussian->GetYaxis()->SetRange(0,10);
    gaussian->GetXaxis()->SetRange(-2, 16);
    gaussian->Draw();
    graph->Draw("same");
   
    
    legend->Draw(); 

   
    // Salva i canvas degli istogrammi su file
    canvasSumHist->SaveAs("time_distribution_evt5_sat.pdf");
    

    return 0;
}
