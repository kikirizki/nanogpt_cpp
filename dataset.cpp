#include "dataset.h"
#include <fstream>
#include <set>

std::string Dataset::decode(std::vector<size_t> idxs) {}

std::string read_txt(std::string &path) {
  std::ifstream file(path);

  if (!file.is_open()) {
    std::cerr << "Failed to open the file." << std::endl;
    return "";
  }
  std::string text = "";
  std::string line;
  
  while (std::getline(file, line)) {
    text += line+"\n";
  }

  file.close();
  return text;
}

Dataset::Dataset(std::string &txt_path, size_t block_size) {

  Dataset::raw_data = read_txt(txt_path);
  Dataset::block_size = block_size;
  std::set<char> char_set(raw_data.begin(), raw_data.end());
  Dataset::vocab = std::string(char_set.begin(), char_set.end());
  
}