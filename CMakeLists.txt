cmake_minimum_required(VERSION 3.17)
project(Hospital)

set(CMAKE_CXX_STANDARD 14)

add_executable(Hospital main.cpp src/Patient.cpp Patient.h)