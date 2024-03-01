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
  return G/t.size();
}


// Funzione da plottare sopra agli istogrammi
double myFunction(double x,int dim) {
    double tau=3.08;
    double a =0.588;
    double num=std::pow(x/tau,(1/a)-1);
    double den=tau*a*std::pow(1+std::pow(x/tau,1/a),2);	      
    return (num/den);
}

int main() {

   const int x_max=25;
   const int num=5000;

    // Apertura del file e lettura dei dati
    std::ifstream file("dati.txt");
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
      F[i] = myFunction(x[i], time.size());
      G[i]=Gaussian_sum(x[i], time-minTime);
    }
      
    
    TGraph *gaussian = new TGraph(num, x, G);
    TGraph *graph = new TGraph(num, x, F);
    TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9); 
    legend->AddEntry(gaussian, "Simulated distribution", "f");
    legend->AddEntry(graph, "Expected distribution", "l");
    graph->SetLineWidth(2);
    graph->SetColor(Red);
    gaussian->SetColor(Blue)



    // Creazione dei canvas e disegno degli istogrammi
    TCanvas *canvasSumHist = new TCanvas("canvasSumHist", "Photoelectron time distribution", 800, 600);
    gaussian->Draw();
    gaussian->GetYaxis()->SetRangeUser(0, 0.25);
    gaussian->GetXaxis()->SetRangeUser(0, x_max);
    graph->Draw("same");
   
    
    legend->Draw(); 

   
    // Salva i canvas degli istogrammi su file
    canvasSumHist->SaveAs("time_distribution_sum_1000_func.pdf");
    

    return 0;
}
