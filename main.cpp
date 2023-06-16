#include "dataset.h"

int main() {
  std::string dataset_path = "../dataset/tiny_shakesphere/input.txt";
  size_t block_size = 8;
  auto shakespere_dataset = Dataset(dataset_path, block_size);

  auto encoded = shakespere_dataset.get_val();
  auto decoded = shakespere_dataset.decode(encoded);
  std::cout<<decoded<<std::endl;
  return 0;
}