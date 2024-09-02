cmake_minimum_required(VERSION 3.27)
project(CS303_Assignment_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS303_Assignment_1 main.cpp
        numCheck.h
        numCheck.cpp
        numChange.h
        numChange.cpp
        numAdd.h
        numAdd.cpp
        numRemove.h
        numRemove.cpp)
