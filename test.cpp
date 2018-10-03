/**
 * @title Linked List
 * @project linked_list
 * @filename test.cpp
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 * TODO test Node functions
 * TODO test List functions
 *
 */

#include <iostream>
#include "test.h"
#include "test/test_types.h"

using namespace std;

int run_tests() {
    try {
        test_node_bool();
    }
    catch (...) {
        return 1;
    }

    try {
        test_node_char();
    }
    catch (...) {
        return 2;
    }

    try {
        test_node_float();
    }
    catch (...) {
        return 3;
    }

    try {
        test_node_int();
    }
    catch (...) {
        return 4;
    }

    try {
        test_node_string();
    }
    catch (...) {
        return 5;
    }

    return 0;
};