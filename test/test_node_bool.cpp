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

void test_node_bool() {
    cout << "|I| \t\t\tBegin \"test_node_bool\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    int t_id = 3;
    auto* t_data_0 = new bool(false);
    auto* t_data_1 = new bool(false);
    auto* t_data_2 = new bool(true);
    auto* t_node_0 = new Node<bool>();
    auto* t_node_1 = new Node<bool>();
    auto* t_node_2 = new Node<bool>();

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
    cout << "|I| \t\t\tEnd \"test_node_bool\"" << endl;
}
