#include "dataset.h"
#include <fstream>
#include <set>

std::string read_txt(const std::string &path) {
  std::ifstream file(path);

  if (!file.is_open()) {
    std::cerr << "Failed to open the file." << std::endl;
    return "";
  }
  std::string text = "";
  std::string line;

  while (std::getline(file, line)) {
    text += line + "\n";
  }

  file.close();
  return text;
}


Dataset::Dataset(std::string &txt_path, size_t block_size) {

  Dataset::raw_data = read_txt(txt_path);
  Dataset::block_size = block_size;
  std::set<char> char_set(raw_data.begin(), raw_data.end());
  Dataset::vocab = std::string(char_set.begin(), char_set.end());
  auto encoded = Dataset::encode(raw_data);
  size_t n = raw_data.length()*0.9;

  Dataset::train_data = std::vector<size_t>(encoded.begin(), encoded.begin() + n);
  Dataset::val_data = std::vector<size_t>(encoded.begin() + n, encoded.end());
 
}

size_t Dataset::get_vocab_size(){
  return Dataset::vocab.size();
}

std::vector<size_t> Dataset::encode(const std::string &text) {
  std::vector<size_t> idxs;
  for (auto &character : text) {
    idxs.emplace_back(Dataset::vocab.find(character));
  }
  return idxs;
}

std::string Dataset::decode(const std::vector<size_t> &idxs) {
  std::string text = "";
  for (auto &idx : idxs) {
    text += Dataset::vocab[idx];
  }
  return text;
}

std::vector<size_t> Dataset::get_train(){
  return Dataset::train_data;
}

std::vector<size_t> Dataset::get_val(){
  return Dataset::val_data;
}