#!/bin/bash

# Set the desired LibTorch version and URL
LIBTORCH_VERSION="2.0.1%2Bcpu"
LIBTORCH_URL="https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-${LIBTORCH_VERSION}.zip"
      
# Set the destination directory
DESTINATION_DIR="/usr/local/"

# Download the LibTorch file
wget $LIBTORCH_URL -O libtorch.zip

# Extract the contents to the destination directory
unzip libtorch.zip -d $DESTINATION_DIR

# Cleanup - remove the downloaded zip file
rm libtorch.zip

echo "LibTorch has been downloaded and extracted to $DESTINATION_DIR"
