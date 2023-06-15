#include "dataset.h"
#include <fstream>

std::string ShakesphereDataset::decode(std::vector<size_t> idxs) {}

std::string read_txt(std::string &path) {
  std::ifstream file(path);

  if (!file.is_open()) {
    std::cerr << "Failed to open the file." << std::endl;
    return "";
  }


  std::string line;
  while (std::getline(file, line)) {
    
    std::string text = line;
  }

  file.close();
  return line;
}

ShakesphereDataset::ShakesphereDataset(std::string &txt_path,
                                       size_t block_size) {

  ShakesphereDataset::raw_data = read_txt(txt_path);
  ShakesphereDataset::block_size = block_size;
  
}