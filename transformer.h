#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <torch/torch.h>

struct Transformer : torch::nn::Module {
  Transformer(const size_t vocab_size) {}

  torch::Tensor forward(torch::Tensor x){

  }

  torch::nn::Linear key{nullptr}, query{nullptr}, value{nullptr};
};

#endif // TRANSFORMER_H