/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include <iostream>
#include "test.h"
#include "test/test_types.h"
#include "include/List.h"

using namespace std;

int run_node_tests() {
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
//        test_node_string();
    }
    catch (...) {
        return 5;
    }

    return 0;
};

int run_list_tests() {
    try {
        test_list_add();
    }
    catch (...) {
        return 1;
    }

    return 0;
};