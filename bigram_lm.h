#include <torch/torch.h>

struct BigramLM : torch::nn::Module {
  BigramLM(size_t vocab_size) {
    token_emb = register_module("token_emb", torch::nn::Embedding(vocab_size, vocab_size));
  }

  torch::Tensor forward(torch::Tensor x, torch::Tensor target= torch::Tensor()) {
    // size of X is (B, T)
    x = token_emb->forward(x); // (B, T, C = vocab_size);
    return x;
  }


  torch::nn::Embedding token_emb{nullptr};
};