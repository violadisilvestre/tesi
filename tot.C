#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <algorithm>

double gaussian(double x, double mean, double stddev) {
  return (1.0 / (stddev * sqrt(2.0 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
}

double Gaussian_sum(double x, const std::vector<double>& t) {
  double G = 0;
  for (double ti : t) {
        G += gaussian(x, ti, 0.6) * exp(-0.25 * x);
  }
  return G;
}

double calculateToT(const std::vector<double>& time, const std::vector<double>& x, int thr) {
  int num = x.size();
  int start = -1;
  double time_start = 0;
  double time_stop = 0;
  
  // Find the start time
  for (int i = 0; i < num; ++i) {
    if (Gaussian_sum(x[i], time) > thr) {
      start = i;
      time_start = x[i];
      break;
    }
  }
    
  if (start != -1) {
    // Find the stop time
    for (int i = start + 1; i < num; ++i) {
      if (Gaussian_sum(x[i], time) < thr) {
                time_stop = x[i - 1];
                break;
      }
    }
  } else {
    std::cout << "No signal" << std::endl;
    return -1; // No valid ToT
  }
  
  return time_stop - time_start;
}

int main() {
  const int x_max = 25;
  const int num = 10000;
  const int thr_low = 10;
  const int thr_high=100;
    
    std::vector<std::string> filenames = {
    "T_smear_0_800.txt", "T_smear_24044_1000.txt",
    "T_smear_26539_2000.txt", "T_smear_2922_1000.txt", "T_smear_41806_4000.txt",  "T_smear_44519_2000.txt", "T_smear_5275_2800.txt",
    "T_smear_57_63.txt", "T_smear_67_150.txt", "T_smear_86_22.txt", "T_smear_4000.txt"
  };
  
  std::ofstream outfile("ToT_results.txt");
  if (!outfile.is_open()) {
    std::cerr << "Unable to open output file!" << std::endl;
    return 1;
  }
  
  for (const auto& filename : filenames) {
    std::ifstream file(filename);
    if (!file.is_open()) {
      std::cerr << "Unable to open file: " << filename << std::endl;
      continue;
    }
    
    std::vector<double> time;
    std::string lineString;
    while (std::getline(file, lineString)) {
      double value = std::stod(lineString);
      time.push_back(value);
    }
        file.close();
	
        // Translate times to start from 0
        double minTime = *std::min_element(time.begin(), time.end());
        for (double& t : time) {
	  t -= minTime;
        }
	
        // Generate random x values
        std::vector<double> x(num);
        std::default_random_engine generator;
        std::uniform_real_distribution<double> distribution(0, x_max);
        for (int i = 0; i < num; ++i) {
	  x[i] = distribution(generator);
        }
	
        std::sort(x.begin(), x.end());
	
        double ToT_low = calculateToT(time, x, thr_low);
	double ToT_high = calculateToT(time, x, thr_high);
	outfile << time.size() << " " << ToT_low << " "<<ToT_high <<std::endl;
 
  }
 
  outfile.close();
  return 0;
}
