#include<iostream>
#include<vector>
#include "sandreco/srcs/sandreco/include/struct.h"
#include <fstream>
{
  // ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/mt/sand_ecal_max_pe/files/digi/sand-events.0.digi.root");
  ROOT::RDataFrame df("tDigit","/storage/gpfs_data/neutrino/users/gauzzi/sandreco/build_slf7.x86_64/Testing/e_pos2_iso_1000.digi.root");
  
  std::cout << "Total events " << df.Count().GetValue() << std::endl;

   Int_t TotEvt = -1;
  
  auto select_events = [&](){
    ++TotEvt;
    Bool_t IsGood = kFALSE;
    if(TotEvt == 0) {
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

	     std::ofstream outFile("T_max_data.txt");

    // Check if the file is opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return t_max; // Return empty vector or handle the error as needed
    }

    // Write t_max data to the file
    for (const auto& value : t_cell_max) {
        outFile << value << std::endl;
    }

    // Close the file
    outFile.close();

return t_cell_max;
 };



 
auto df_ext = df.Filter(select_events)
    .Define("n_pe", get_n_pe, {"dg_cell"})
   .Define("Time", get_time_pe, {"dg_cell"})
  .Define("Time_max", get_time_pe_max_cell, {"dg_cell"});

}
