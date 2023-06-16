#include "bigram_lm.h"
#include "dataset.h"
#include <random>

std::vector<size_t> random_int(size_t min, size_t max, size_t size) {
  std::vector<size_t> random_numbers;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<size_t> dist(min, max);
  for (int i = 0; i < size; i++) {
    random_numbers.emplace_back(dist(gen));
  }
  return random_numbers;
}

std::pair<torch::Tensor, torch::Tensor> get_batch(std::vector<size_t> &split, const int &block_size) {
  auto data_ptr = split.data();
  std::vector<torch::Tensor> xb;
  std::vector<torch::Tensor> yb;
  auto random_idxs = random_int(0, split.size() - block_size, block_size);
  for (auto &i : random_idxs) {
    xb.emplace_back(torch::from_blob(data_ptr + i, {block_size}));
    yb.emplace_back(torch::from_blob(data_ptr + (i + 1), {block_size}));
  }
  return std::make_pair(torch::stack(xb), torch::stack(yb));
}

int main() {
  std::string dataset_path = "../dataset/tiny_shakesphere/input.txt";
  int block_size = 8;
  auto shakespere_dataset = Dataset(dataset_path, block_size);
  auto train_data = shakespere_dataset.get_train();
  auto val_data = shakespere_dataset.get_val();
  auto [xb, yb] = get_batch(train_data, block_size);
  return 0;
}