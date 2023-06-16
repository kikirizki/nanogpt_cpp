#include <torch/torch.h>
namespace F = torch::nn::functional;

struct BigramLM : torch::nn::Module {
  BigramLM(size_t vocab_size) {
    token_emb =
        register_module("token_emb", torch::nn::Embedding(vocab_size,vocab_size));
  }

  torch::Tensor forward(torch::Tensor x, torch::Tensor target) {
    // size of X is (B, T)
    auto logit = token_emb->forward(x); // (B, T, C = vocab_size);
    int64_t B = logit.size(0);
    int64_t T = logit.size(1);
    int64_t C = logit.size(2);
    logit = logit.view({B * T, C}); // (B,T,C) -> (B*T,C)
    target = target.view({B * T});  // (B,T) -> (B*T)
    auto loss = F::cross_entropy(logit, target);
    return loss;
  }

  
  torch::Tensor forward(torch::Tensor x) {
    // size of X is (B, T)
    auto logit = token_emb->forward(x); // (B, T, C = vocab_size);
    return logit;
  }

  torch::nn::Embedding token_emb{nullptr};
};