cmake_minimum_required(VERSION 3.20)
project(HarborLab LANGUAGES CXX)

add_executable(harborlabd apps/harborlabd/main.cpp)
target_compile_features(harborlabd PRIVATE cxx_std_20)