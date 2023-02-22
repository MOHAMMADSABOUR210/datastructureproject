cmake_minimum_required(VERSION 3.17)
project(Hospital)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Hospital main.cpp src/Patient.cpp include/Patient.h include/ResalatHospital.h src/ResalatHospital.cpp src/BualiHospital.cpp   src/Hospital.cpp include/Hospital.h)