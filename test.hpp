/**
 * @title Linked List class template
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#ifndef LINKED_LIST_TEST_HPP
#define LINKED_LIST_TEST_HPP

#include "List.hpp"
#include "Config.hpp"


int run_node_tests(int mode);

int run_list_tests(int mode);

void test_list_add(int mode);

void test_list_append(int mode);

void test_list_del(int mode);

void test_list_find_id();

void test_list_find_data(int mode);

void test_node_int();

void test_node_char();

void test_node_bool();

void test_node_float();

void test_node_str();

void test_info();

#endif //LINKED_LIST_TEST_HPP
