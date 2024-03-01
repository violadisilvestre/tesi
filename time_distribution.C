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

// Funzione per generare numeri casuali distribuiti gaussianamente
double generateGaussian(double mean, double sigma, std::mt19937 &gen) {
    std::normal_distribution<double> distribution(mean, sigma);
    return distribution(gen);
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

   const int bin=25;
   const int x_max=25;
   const int num=5000;
   Color_t myColor = kTeal+7;
   double d=0;

    // Apertura del file e lettura dei dati
    std::ifstream file("dati_1000_ev10.txt");
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

    // Mescola il vettore time in modo casuale
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(time.begin(), time.end(), g);

    // Creazione dell'istogramma 'sumHistogram'
    TH1F* sumHistogram = new TH1F("sumHistogram", "Photoelectron time distribution", bin, 0, x_max);
    sumHistogram->SetFillColor(myColor);
    sumHistogram->SetXTitle("time [ns]");
    sumHistogram->SetYTitle("Counts"); // Update the y-axis title

    double sigma = 0.35/time.size();
    std::sort(time.begin(), time.end());
    for (int i = 0; i < time.size(); ++i) {
        double mean = time[i];
        TH1F* histogram = new TH1F("histogram", "Normalized Histogram", bin, 0, x_max);

        for (int j = 0; j < 10000; ++j) {
	  histogram->Fill(generateGaussian(mean-minTime, sigma, g));
        }

        histogram->Scale(1.0 / 10000); // Normalize the histogram
        sumHistogram->Add(histogram);
        delete histogram;
    }

    // Creazione dell'istogramma 'realHistogram'
    TH1F* realHistogram = new TH1F("realHistogram", "Time Distribution", bin, 0, x_max);
    realHistogram->SetFillColor(kViolet);
    realHistogram->SetXTitle("time [ns]");
    realHistogram->SetYTitle("Frequency"); // Update the y-axis title

    for (int i = 0; i < time.size(); ++i) {
         realHistogram->Fill(time[i]-minTime);
    }

    // Normalization factor for realHistogram
     double normalizationFactorReal = 1.0 / realHistogram->Integral();
     realHistogram->Scale(normalizationFactorReal);

    // Normalization factor for sumHistogram
    double normalizationFactorSum = 1.0 / sumHistogram->Integral();
    sumHistogram->Scale(normalizationFactorSum);
    double F[num];
    double x[num];
    double x_gaus[num];
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0.0,maxTime-minTime);
    
    for (int i = 0; i < num; ++i) {
      
      x[i] =distribution(generator);
    }
    std::sort(x, x + num); // Sorting x in ascending order

    for (int i = 0; i < num; ++i) {
      F[i] = myFunction(x[i], time.size());
    }
    
    TGraph *graph = new TGraph(num, x, F);
    TLegend *legend = new TLegend(0.7, 0.55, 0.9, 0.75); 
    legend->AddEntry(sumHistogram, "Simulated distribution", "f");
    legend->AddEntry(graph, "Expected distribution", "l");
    graph->SetLineWidth(2);


    // Creazione dei canvas e disegno degli istogrammi
    TCanvas *canvasSumHist = new TCanvas("canvasSumHist", "Photoelectron time distribution", 800, 600);
    sumHistogram->Draw("hist");
    sumHistogram->GetYaxis()->SetRangeUser(0, 0.25);
    sumHistogram->GetXaxis()->SetRangeUser(0, x_max);
    graph->Draw("same");
   
    
    legend->Draw(); 

    TCanvas *canvasRealHist = new TCanvas("canvasRealHist", "Time Distribution", 800, 600);
    realHistogram->Draw("hist");
    //realHistogram->GetXaxis()->SetLimits(0, 20);
    realHistogram->GetYaxis()->SetRangeUser(0, 0.25);
    graph->Draw("same"); 
  
    // Salva i canvas degli istogrammi su file
    canvasSumHist->SaveAs("time_distribution_sum_1000_ev10.pdf");
    canvasRealHist->SaveAs("time_distribution_real.pdf");

    return 0;
}

