/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */

#include <iostream>
#include "test_types.h"
#include "../include/Node.h"
#include "../include/List.h"

using namespace std;


void test_node_int() {
    cout << "|I| \t\t\tBegin \"test_node_int\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    int t_id = 3;
    auto* t_data_0 = new long long int(111111111111111110);
    auto* t_data_1 = new long long int(222222222222222221);
    auto* t_data_2 = new long long int(333333333333333332);
    auto* t_node_0 = new Node<long long int>();
    auto* t_node_1 = new Node<long long int>();
    auto* t_node_2 = new Node<long long int>();

    cout << "|~| =============================================" << endl;
    cout << "|I| \tNode 0" << endl;
    t_node_0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node_1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node_2->print_node(0);
    cout << "|~| =============================================" << endl;

    cout << "|~| =============================================" << endl;
    t_node_0->set_index(t_id);
    t_node_0->set_data(t_data_0);
    t_node_0->set_next(t_node_1);
    t_node_1->set_index(++t_id);
    t_node_1->set_data(t_data_1);
    t_node_1->set_prev(t_node_0);
    t_node_1->set_next(t_node_2);
    t_node_2->set_index(--t_id);
    t_node_2->set_data(t_data_2);
    t_node_2->set_prev(t_node_1);

    cout << "|I| \tNode 0" << endl;
    t_node_0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node_1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node_2->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_node_int\"" << endl;
};
