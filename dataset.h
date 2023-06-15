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

public:
  Dataset(std::string &txt_path, size_t block_size);
  std::vector<size_t> encode(std::string &txt);
};
#endif // SHAKESPEREDATASET_H