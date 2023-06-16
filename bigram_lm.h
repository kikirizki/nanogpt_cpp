#include <torch/torch.h>

class BigramLM : public torch::nn::Module {
public:
  BigramLM(int64_t vocab_size) : token_embedding(vocab_size, vocab_size) {
    register_module("token_embedding", token_embedding);
  }

  torch::Tensor forward(torch::Tensor x, torch::Tensor target = torch::Tensor()) {
    torch::Tensor logit = token_embedding(x);
    torch::IntArrayRef logitShape = logit.sizes();
    int64_t B = logitShape[0], T = logitShape[1], C = logitShape[2];
    
    if (!target.defined()) {
      return logit;
    }

    logit = logit.view({B * T, C});
    target = target.view({B * T});
    torch::Tensor loss = torch::nn::functional::cross_entropy(logit, target);
    
    return loss, logit;
  }

  torch::Tensor generate(torch::Tensor idx, int64_t max_new_token) {
    for (int64_t _ = 0; _ < max_new_token; ++_) {
      torch::Tensor logit = forward(idx);
      logit = logit.index({Slice(), -1, Slice()});
      
      torch::Tensor probs = torch::softmax(logit, -1);
      torch::Tensor next_idx = torch::multinomial(probs, 1);
      idx = torch::cat({idx, next_idx}, 1);
    }
    
    return idx;
  }

private:
  torch::nn::Embedding token_embedding;
};