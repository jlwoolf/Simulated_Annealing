cmake_minimum_required(VERSION 3.17)
project(SimulatedAnnealing)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimulatedAnnealing main.cpp Point.cpp Point.h Partition.cpp Partition.h)