# project name and language
project(SDLog LANGUAGES CXX)
# set minimum cmake version
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
# set c++ standard
add_compile_options(-std=c++11)

# add executable using a hardcoded path
add_executable(main src/main.cpp)
