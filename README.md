![example workflow](https://github.com/kikirizki/nanogpt_cpp/actions/workflows/cmake.yml/badge.svg)
# C++ version of nanoGPT

This implementation is based on Andrej Kharpaty's [repo](https://github.com/karpathy/nanogpt)

## Download dataset
```bash 
bash scripts/download_dataset.sh
```

## Install libtorch
```bash
sudo bash script/install_libtorch.sh
```

## Compile
```bash
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/usr/local/libtorch ..
cmake --build . --config Release
```

## Roadmap
- [ ] GGLM implementation
- [x] Libtorch implementation (WIP)
- [ ] ncnn implementation
