#ifndef SHAKESPEREDATASET_H
#define SHAKESPEREDATASET_H

#include <iostream>
#include <string>
#include <vector>


class ShakesphereDataset {

private:
size_t block_size=0;
std::string raw_data="";
    
public:
    ShakesphereDataset(std::string &txt_path, size_t block_size);
    std::string decode(std::vector<size_t> idxs);
    
};
#endif  // SHAKESPEREDATASET_H