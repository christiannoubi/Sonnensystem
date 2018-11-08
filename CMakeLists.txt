cmake_minimum_required(VERSION 3.10)
project(Sonnensystem)

set(CMAKE_CXX_STANDARD 11)

add_executable(Sonnensystem main.cpp Himmelskoerper.h Planet.h Stern.h Sonnensystem.h)