cmake_minimum_required(VERSION 4.0)
project(avl_tree)

set(CMAKE_CXX_STANDARD 26)

add_executable(avl_tree main.cpp
        avl_tree.h
        avl_tree.cpp)
