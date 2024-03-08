#include<iostream>
#include<vector>
#include "sandreco/srcs/sandreco/include/struct.h"

{
   ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/mt/sand_ecal_max_pe/files/digi/sand-events.0.digi.root");
  // ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/gauzzi/");
  
  std::cout << "Total events " << df.Count().GetValue() << std::endl;

   Int_t TotEvt = -1;
  
  auto select_events = [&](){
    ++TotEvt;
    Bool_t IsGood = kFALSE;
    if(TotEvt == 1) {
	  IsGood = kTRUE;
    }
    return IsGood;
  };

  auto get_n_pe = [](ROOT::VecOps::RVec<dg_cell>& cells){
    std::vector<int> v;
    for(auto &c: cells){
      for(auto &p: c.ps1){
	v.push_back(p.photo_el.size());
      }
      for(auto &p: c.ps2){
	v.push_back(p.photo_el.size());
      }
    }
    return v;
  };
  //salvo tutti i pe
 auto get_time_pe = [](ROOT::VecOps::RVec<dg_cell>& cells){
    std::vector<double> t;
    for(auto &c: cells){
      for(auto &p: c.ps1){
	 for (auto &pe : p.photo_el) {
                t.push_back(pe.time);
            }
      }
      for(auto &p: c.ps2){
	for (auto &pe : p.photo_el) {
	  t.push_back(pe.time);
	}
      }
    }
    return t;
 };
 auto get_time_pe_max_cell = [](ROOT::VecOps::RVec<dg_cell>& cells) {
std::vector<double> t_cell_max; // Vector to store times of pe for the cell with the most pe
    std::vector<double> t_max;
    int max_pe_count = 0;
    int max_pe_cell_index = -1;
    const int num=1000;
    const double stddev=0.35;

    // Find the cell with the maximum number of pe
    for (size_t i = 0; i < cells.size(); ++i) {
        int pe_count = 0;
        for (const auto& p : cells[i].ps1) {
            pe_count += p.photo_el.size();
        }
        if (pe_count > max_pe_count) {
            max_pe_count = pe_count;
            max_pe_cell_index = i;
        }
    }

    // Extract times of pe for the cell with the most pe
      //Subtract the minimum value from all time values in t_cell_max
    double min_value = 1;
    double max_value=1000;
    if (max_pe_cell_index != -1) {
        for (const auto& p : cells[max_pe_cell_index].ps1) {
            for (const auto& pe : p.photo_el) {
                t_cell_max.push_back(pe.time);
            }
	    //Subtract the minimum value from all time values in t_cell_max
	    min_value = *std::min_element(t_cell_max.begin(), t_cell_max.end());
	    max_value = *std::max_element(t_cell_max.begin(), t_cell_max.end());
        }
    }
std::random_device rd{};
std::mt19937 gen{rd()};

// Generate num random samples from the normal distribution for each time value in t_cell_max
for(int j=0; j<t_cell_max.size(); j++) {
  std::normal_distribution<double> d{t_cell_max[j]-min_value, stddev};
    for (int i = 0; i < num; ++i) {
      auto random_int = [&d, &gen]{ return std::round(d(gen)); };
      t_max.push_back(random_int()); // Add random integer to the time value
    }
}
return t_max;
 };
  auto get_F = [](ROOT::VecOps::RVec<dg_cell>& cells) {
    std::vector<double> t_cell_max; // Vector to store times of pe for the cell with the most pe
    std::vector<double> F;
    int max_pe_count = 0;
    int max_pe_cell_index = -1;
    const int num=1000;
    const double tau=3.08;
    const double a =0.588;

    // Find the cell with the maximum number of pe
    for (size_t i = 0; i < cells.size(); ++i) {
        int pe_count = 0;
        for (const auto& p : cells[i].ps1) {
	  pe_count += p.photo_el.size();
        }
        if (pe_count > max_pe_count) {
            max_pe_count = pe_count;
            max_pe_cell_index = i;
        }
    }

    // Extract times of pe for the cell with the most pe DA SISTEMARE
   
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0.0,25);
    for (int i = 0; i < num; ++i) {
      double x =distribution(generator);
      double num=std::pow(x/tau,(1/a)-1);
      double den=tau*a*std::pow(1+std::pow(x/tau,1/a),2);	  
      F.push_back(num/den);
 }
    return F;

 };
 
auto df_ext = df.Filter(select_events)
    .Define("n_pe", get_n_pe, {"dg_cell"})
   .Define("Time", get_time_pe, {"dg_cell"})
   .Define("Time_max", get_time_pe_max_cell, {"dg_cell"})
   .Define("F",get_F,{"dg_cell"});

 auto h_T_pe = df_ext.Histo1D({" Time distribution","Time distribution;Time [ns];# of photoelectrons",25, 0.0,25}, "Time_max");
 auto h_F= df_ext.Histo1D({" Time distribution","Time distribution;Time [ns];# of photoelectrons",200, 0.0,25}, "F");
 
 
 auto c1 = new TCanvas();
 c1->SetGridx();
 c1->SetGridy();
 double integral=h_T_pe->Integral();
 double integral2=h_F->Integral();
 // Normalize the histogram area to 1
 /*if (integral != 0) {
  h_T_pe->Scale(1.0 / integral);
  h_F->Scale(1.0/integral2);
  }*/
 h_T_pe->Scale(1.0/1000);
 // h_F->Scale(1.0/1000);

 /*TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9); 
 legend->SetBorderSize(2);
 legend->AddEntry(h_T_pe, "Simulated distribution", "l");
 legend->AddEntry(h_F "Expected distribution", "l");*/

 h_T_pe->SetStats(0);
 // h_F->SetStats(0);
 //h_F->Draw("HIST");
 h_T_pe->Draw("HIST");
 h_T_pe->SetLineWidth(2);
 //h_F->SetLineWidth(1);
 //h_F->SetLineColor(kBlack);
 h_T_pe->SetLineColor(kMagenta);
 //legend->Draw(); 
 
 gROOT->GetListOfCanvases()->Draw();
 

}
