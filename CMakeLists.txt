cmake_minimum_required(VERSION 3.12)
project(nanogpt)

set(CMAKE_CXX_STANDARD 11)

add_executable(nanogpt main.cpp dataset.cpp)
