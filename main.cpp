#include "dataset.h"

int main() {
  std::string dataset_path = "../dataset/tiny_shakesphere/input.txt";
  size_t block_size = 8;
  auto shakespere_dataset = Dataset(dataset_path, block_size);

  std::string raw_text = "Hello world";
  auto encoded = shakespere_dataset.encode(raw_text);
  auto decoded = shakespere_dataset.decode(encoded);
  std::cout<<decoded<<std::endl;
  return 0;
}