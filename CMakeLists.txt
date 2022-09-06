cmake_minimum_required(VERSION 3.23)
project(cpp_journey VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
find_library(Boost required)
include_directories(${BOOST_INCLUDE_DIR} C:/cpp_libs/boost)
include_directories(${TENSORFLOW_C_INCLUDE_DIR} C:/cpp_libs/tensorflow-c)
include_directories(${MLPACK_INCLUDE_DIR} C:/cpp_libs/mlpack)

add_executable(cpp_journey main.cpp statistics.h
        cow/cow.cpp cow/cow.h
        monte_carlo/MonteCarlo.cpp monte_carlo/MonteCarlo.h
        tree/tree.cpp tree/tree.h)
