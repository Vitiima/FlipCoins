cmake_minimum_required(VERSION 3.28)
project(FlipCoin)

set(CMAKE_CXX_STANDARD 26)

add_executable(FlipCoin main.cpp
        flipcoin.h
        flipcoin.cpp)
