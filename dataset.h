#ifndef SHAKESPEREDATASET_H
#define SHAKESPEREDATASET_H

#include <iostream>
#include <string>
#include <vector>

class Dataset {

private:
  size_t block_size = 0;
  std::string raw_data = "";
  std::string vocab = "";
  std::vector<size_t> train_data;
  std::vector<size_t> val_data;


public:
  Dataset(std::string &txt_path, size_t block_size);
  std::vector<size_t> encode(const std::string &txt);
  std::string decode(const std::vector<size_t> &idxs);
  std::vector<size_t> get_train();
  std::vector<size_t> get_val();
  size_t get_vocab_size();
};
#endif // SHAKESPEREDATASET_H