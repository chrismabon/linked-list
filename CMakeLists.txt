cmake_minimum_required(VERSION 3.10)
project(linked_list)

set(CMAKE_CXX_STANDARD 11)

add_executable(linked_list
        include/Config.h
        include/List.h
        include/Node.h
        test.h
        template/List.tpp
        template/Node.tpp
        test.cpp
        main.cpp)