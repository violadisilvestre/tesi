#include<iostream>
#include<vector>
#include "sandreco/srcs/sandreco/include/struct.h"
#include <fstream>
{
  //   ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/mt/sand_ecal_max_pe/files/digi/sand-events.0.digi.root");
  //  ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/gauzzi/sandreco/build_slf7.x86_64/Testing/e_pos2_iso_1000.digi.root");
  ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/gauzzi/sandreco/build_slf7.x86_64/Testing/mu_pos2_user_1000.digit.root");
  std::cout << "Total events " << df.Count().GetValue() << std::endl;

   Int_t TotEvt = -1;
  
  auto select_events = [&](){
    ++TotEvt;
    Bool_t IsGood = kFALSE;
    if(TotEvt==191) {
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
    int max_pe_count = -1;
    int max_pe_cell_index = -1;
    //int z=0;
    // Find the cell with the maximum number of pe
    for(auto &c: cells) {
        int pe_count = 0;
	//std::cout<<i<<std::endl;
        for (const auto& p : c.ps1) {
	  pe_count = p.photo_el.size();
	  std::cout<<pe_count<<std::endl;
	  if (pe_count > max_pe_count) {
            max_pe_count = pe_count;
            max_pe_cell_index = c.id;
	  }
	}   //std::cout<< p.photo_el.size()<<std::endl;
  }
    std::cout<<"max:"<<max_pe_cell_index<<std::endl;
    // Open a file for writing (overwriting the file if it already exists)
    std::ofstream outFile("T_max_data.txt", std::ios::trunc);
    // Check if the file is opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return t_cell_max; // Return empty vector or handle the error as needed
    }

    // Extract times of pe for the cell with the most pe
     if (max_pe_cell_index != -1) {
      //std::cout<<max_pe_cell_index<<std::endl;
       for(auto &c: cells){
	 for (const auto& p : c.ps1) {
	   if(c.id==max_pe_cell_index){
	     for (const auto& pe : p.photo_el) {
	       t_cell_max.push_back(pe.time);
	       outFile << pe.time << std::endl;
	     }
	   }
	 }
       }
     }   // Close the file
    outFile.close();
    
    return t_cell_max;
};
    



 
auto df_ext = df.Filter(select_events)
  .Define("Time_max", get_time_pe_max_cell, {"dg_cell"});
//.Define("n_pe", get_n_pe, {"dg_cell"})
//  .Define("Time", get_time_pe, {"dg_cell"});
 
auto h_Time = df_ext.Histo1D({"h_Time",";Time (s);",200,0,1500},"Time_max");
auto c1 = new TCanvas();
h_Time->Draw();

}
