#include <torch/torch.h>

struct BigramLM : torch::nn::Module {
  BigramLM() {
    token_emb = register_module("token_emb", torch::nn::Linear(784, 64));
  }

  torch::Tensor forward(torch::Tensor x, torch::Tensor target= torch::Tensor()) {
    x = torch::relu(token_emb->forward(x.reshape({x.size(0), 784})));
    return x;
  }


  torch::nn::Linear token_emb{nullptr};
};