#include "dataset.h"

int main(){
    std::string dataset_path = "../dataset/tiny_shakesphere/input.txt";
    size_t block_size = 8;
    ShakesphereDataset(dataset_path, block_size);
    return 0;
}