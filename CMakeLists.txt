cmake_minimum_required(VERSION 3.10)
project(linked-list)

set(CMAKE_CXX_STANDARD 11)

include_directories(include template linked-list)

add_executable(linked-list
        template/List.tpp
        template/Node.tpp
        test.cpp
        main.cpp
        include/Config.hpp
        include/List.hpp
        include/Node.hpp
        test.hpp)