cmake_minimum_required(VERSION 3.10)
project(linked_list)

set(CMAKE_CXX_STANDARD 11)

include_directories(include template linked_list)

add_executable(linked_list
        test.cpp
        main.cpp
        template/List.tpp
        include/Config.hpp
        include/List.hpp
        test.hpp)