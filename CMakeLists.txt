cmake_minimum_required(VERSION 4.0)
project(LAB2)

set(CMAKE_CXX_STANDARD 14)

add_executable(LAB2 main.cpp
        getBoard.cpp
        getBoard.h
        movePlayer.cpp
        movePlayer.h
        moveObstacles.cpp
        moveObstacles.h)
