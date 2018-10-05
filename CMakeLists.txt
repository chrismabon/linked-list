cmake_minimum_required(VERSION 3.10)
project(linked_list)

set(CMAKE_CXX_STANDARD 11)

add_executable(linked_list
        include/Config.h
        include/List.h
        include/Node.h
        test.h
        test/test_types.h
        template/List.tpp
        template/Node.tpp
        test/test_node_bool.cpp
        test/test_node_char.cpp
        test/test_node_float.cpp
        test/test_node_int.cpp
        test/test_node_string.cpp
        test/test_types.cpp
        test.cpp
        main.cpp)