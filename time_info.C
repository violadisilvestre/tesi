#include<iostream>
#include<vector>
#include<fstream>
#include"TCanvas.h"

{
  Int_t TotEvt = 0;
  Int_t Npart, i = -1, j = -1, nn = -1;

  std::ifstream is("inside_fidvol_4000pe.txt");
  std::vector<int> evt;
  if(is.is_open()){
    while(!is.eof()){
      char line[30];
      is.getline(line,30);
      evt.push_back(atoi(line));
    }
  }
  else{
    std::cout << " Non si apre " << std::endl;
  }
  is.close();

  std::ofstream out15("fixed_enu_from_0_to_15gev_ifv_4000.txt");
  if(out15.fail())    std::cout << "File writing error!!" << std::endl;

  ROOT::RDataFrame df("DetSimPassThru/gRooTracker","/storage/gpfs_data/neutrino/users/mt/sand_ecal_max_pe/files/edep/sand-events.*.edep.root");

  std::cout << " Total events " << df.Count().GetValue() << std::endl;
    
  auto select_events = [&](){
    ++TotEvt;
    Bool_t IsGood = kFALSE;
    for(Int_t it = 0; it < evt.size(); it++){
      if(TotEvt == evt[it]) {
	      IsGood = kTRUE;
      }
    }
    return IsGood;
  };
  
  auto get_vtx_x = [](ROOT::VecOps::RVec<Double_t>& v) {
    return v[0];
  };
  auto get_vtx_y = [](ROOT::VecOps::RVec<Double_t>& v) {
    return v[1];
  };
  auto get_vtx_z = [](ROOT::VecOps::RVec<Double_t>& v) {
    return v[2];
  };
  auto get_npart = [&](int& n, ROOT::VecOps::RVec<Int_t>& v) {
    Npart = n;
    /*std::cout << " N. part. " << Npart << std::endl;
    for (Int_t i = 0; i < n; i++){
      std::cout << " Part. " << v[i] << std::endl;
    }*/
    return Npart;
  };
  auto get_Enu = [&](const ROOT::VecOps::RVec<double>& mom4) {
    nn++;
    if(mom4[3] <= 15.){
      out15 << evt[nn] << std::endl;
    }
    return mom4[3];
  };
  auto get_time = [](const ROOT::VecOps::RVec<double>& pos4) {
    //std::cout << pos4[3] << std::endl;
    return pos4[3];
  };
  
  auto df_ext = df.Filter(select_events)
    .Define("x","get_vtx_x(EvtVtx)")
    .Define("y","get_vtx_y(EvtVtx)")
    .Define("z","get_vtx_z(EvtVtx)")
    .Define("Enu",[&](const ROOT::VecOps::RVec<double>& mom4){ nn++; if(mom4[3] <= 15.){ out15 << evt[nn] << std::endl; } return mom4[3]; },{"StdHepP4"})
    .Define("Time","get_time(EvtVtx)")  //{"StdHepX4"}
    .Define("npart","get_npart(StdHepN,StdHepPdg)");

  auto h_x = df_ext.Histo1D({"h_x",";X;",100,-5.,5.},"x");
  auto h_y = df_ext.Histo1D({"h_y",";Y;",100,-6.,1.5},"y");
  auto h_z = df_ext.Histo1D({"h_z",";Z;",100,20.,28.},"z");
  auto h_n = df_ext.Histo1D({"h_n",";N;",100,0.,100.},"npart");
  auto h_Enu = df_ext.Histo1D({"h_Enu",";E_{#nu};",100,0.,100.},"Enu");
  auto h_Time = df_ext.Histo1D({"h_Time",";Time (s);",200,4e-08,9e-08},"Time");

  auto c1 = new TCanvas();
  h_x->Draw();
  auto c2 = new TCanvas();
  h_y->Draw();
  auto c3 = new TCanvas();
  h_z->Draw();
  auto c4 = new TCanvas();
  h_n->Draw();
  auto c5 = new TCanvas();
  h_Enu->Draw();
  auto c6 = new TCanvas();
  c6->SetLogy();
  h_Time->Draw();

  std::cout << " Filtered events " << df.Count().GetValue() << std::endl;

  char path[56];
  char outname[100];

  sprintf(path,".");
  sprintf(outname,"%s/sand_nu_primary_npe5000_out_fiducial_volume.root", path);
  TFile *outfile = new TFile(outname, "RECREATE");
  outfile->cd();
  h_x->Write();
  h_y->Write();
  h_z->Write();
  h_n->Write();
  h_Enu->Write();
 
  outfile->Write();
  outfile->Close();

  out15.close();
}
