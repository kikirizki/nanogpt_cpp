cmake_minimum_required(VERSION 3.18)
project(nanogpt)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(nanogpt main.cpp dataset.h dataset.cpp)
target_link_libraries(nanogpt "${TORCH_LIBRARIES}")
set_property(TARGET nanogpt PROPERTY CXX_STANDARD 17)
