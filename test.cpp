/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include <iostream>
#include "test.h"
#include "include/List.h"
#include "include/Node.h"

using namespace std;

void test_node_bool() {
    cout << "|I| \t\t\tBegin \"test_node_bool\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    int t_id = 3;
    auto* t_data_0 = new bool(true);
    auto* t_data_1 = new bool(false);
    auto* t_data_2 = new bool(true);
    auto* t_node_0 = new Node<bool>(true);
    auto* t_node_1 = new Node<bool>(true);
    auto* t_node_2 = new Node<bool>(true);

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
};

void test_node_char() {
    cout << "|I| \t\t\tBegin \"test_node_char\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    int t_id = 3;
    auto* t_data_0 = new signed char('!');
    auto* t_data_1 = new signed char('~');
    auto* t_data_2 = new signed char('|');
    auto* t_node_0 = new Node<signed char>(true);
    auto* t_node_1 = new Node<signed char>(true);
    auto* t_node_2 = new Node<signed char>(true);

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
    cout << "|I| \t\t\tEnd \"test_node_char\"" << endl;
};

void test_node_float() {
    cout << "|I| \t\t\tBegin \"test_node_float\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    int t_id = 3;
    auto* t_data_0 = new float(0.06);
    auto* t_data_1 = new float(9.7);
    auto* t_data_2 = new float(3.14);
    auto* t_node_0 = new Node<float>(true);
    auto* t_node_1 = new Node<float>(true);
    auto* t_node_2 = new Node<float>(true);

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
    cout << "|I| \t\t\tEnd \"test_node_float\"" << endl;
};

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
    auto* t_node_0 = new Node<long long int>(true);
    auto* t_node_1 = new Node<long long int>(true);
    auto* t_node_2 = new Node<long long int>(true);

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

void test_node_string() {
    cout << "|I| \t\t\tBegin \"test_node_string\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    int t_id = 3;
    auto* t_data_0 = new string("0000");
    auto* t_data_1 = new string("1111");
    auto* t_data_2 = new string("2222");
    auto* t_node_0 = new Node<string>(true);
    auto* t_node_1 = new Node<string>(true);
    auto* t_node_2 = new Node<string>(true);

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
    cout << "|I| \t\t\tEnd \"test_node_string\"" << endl;
};

void test_list_add() {
    cout << "|I| \t\t\tBegin \"test_list_add\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * BOOL LIST ADD TEST
     */
    auto* list_bool = List<bool>::gen_list(5);

    list_bool->print_list(0);

    auto* bool_node0 = Node<bool>::gen_node();
    auto* bool0 = new bool(true);
    bool_node0->set_data(bool0);
    bool_node0->print_node(0);

    auto* bool_node1 = Node<bool>::gen_node();
    auto* bool1 = new bool(false);
    bool_node1->set_data(bool1);
    bool_node1->print_node(0);

    auto* bool_node2 = Node<bool>::gen_node();
    auto* bool2 = new bool(false);
    bool_node2->set_data(bool2);
    bool_node2->print_node(0);

    auto* bool_node3 = Node<bool>::gen_node();
    auto* bool3 = new bool(true);
    bool_node3->set_data(bool3);
    bool_node3->print_node(0);

    list_bool->add_node(0, bool_node0);
    list_bool->add_node(1, bool_node1);
    list_bool->add_node(4, bool_node2);
    list_bool->add_node(8, bool_node3);

    list_bool->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * INT LIST ADD TEST
     */
    auto* list_int = List<int>::gen_list(5);

    list_int->print_list(0);

    auto* int_node0 = Node<int>::gen_node();
    auto* int0 = new int(0);
    int_node0->set_data(int0);
    int_node0->print_node(0);

    auto* int_node1 = Node<int>::gen_node();
    auto* int1 = new int(1);
    int_node1->set_data(int1);
    int_node1->print_node(0);

    auto* int_node2 = Node<int>::gen_node();
    auto* int2 = new int(2);
    int_node2->set_data(int2);
    int_node2->print_node(0);

    auto* int_node3 = Node<int>::gen_node();
    auto* int3 = new int(3);
    int_node3->set_data(int3);
    int_node3->print_node(0);

    list_int->add_node(0, int_node0);
    list_int->add_node(1, int_node1);
    list_int->add_node(4, int_node2);
    list_int->add_node(8, int_node3);

    list_int->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * CHAR LIST ADD TEST
     */
    auto* list_char = List<char>::gen_list(5);

    list_char->print_list(0);

    auto* char_node0 = Node<char>::gen_node();
    auto* char0 = new char('0');
    char_node0->set_data(char0);
    char_node0->print_node(0);

    auto* char_node1 = Node<char>::gen_node();
    auto* char1 = new char('1');
    char_node1->set_data(char1);
    char_node1->print_node(0);

    auto* char_node2 = Node<char>::gen_node();
    auto* char2 = new char('2');
    char_node2->set_data(char2);
    char_node2->print_node(0);

    auto* char_node3 = Node<char>::gen_node();
    auto* char3 = new char('3');
    char_node3->set_data(char3);
    char_node3->print_node(0);

    list_char->add_node(0, char_node0);
    list_char->add_node(1, char_node1);
    list_char->add_node(4, char_node2);
    list_char->add_node(8, char_node3);

    list_char->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * FLOAT LIST ADD TEST
     */
    auto* list_float = List<float>::gen_list(5);

    list_float->print_list(0);

    auto* float_node0 = Node<float>::gen_node();
    auto* float0 = new float(0.0);
    float_node0->set_data(float0);
    float_node0->print_node(0);

    auto* float_node1 = Node<float>::gen_node();
    auto* float1 = new float(0.1);
    float_node1->set_data(float1);
    float_node1->print_node(0);

    auto* float_node2 = Node<float>::gen_node();
    auto* float2 = new float(0.2);
    float_node2->set_data(float2);
    float_node2->print_node(0);

    auto* float_node3 = Node<float>::gen_node();
    auto* float3 = new float(0.3);
    float_node3->set_data(float3);
    float_node3->print_node(0);

    list_float->add_node(0, float_node0);
    list_float->add_node(1, float_node1);
    list_float->add_node(4, float_node2);
    list_float->add_node(8, float_node3);

    list_float->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * STRING LIST ADD TEST
     */
    auto* list_string = List<string>::gen_list(5);

    list_string->print_list(0);

    auto* string_node0 = Node<string>::gen_node();
    auto* string0 = new string("000");
    string_node0->set_data(string0);
    string_node0->print_node(0);

    auto* string_node1 = Node<string>::gen_node();
    auto* string1 = new string("111");
    string_node1->set_data(string1);
    string_node1->print_node(0);

    auto* string_node2 = Node<string>::gen_node();
    auto* string2 = new string("222");
    string_node2->set_data(string2);
    string_node2->print_node(0);

    auto* string_node3 = Node<string>::gen_node();
    auto* string3 = new string("333");
    string_node3->set_data(string3);
    string_node3->print_node(0);

    list_string->add_node(0, string_node0);
    list_string->add_node(1, string_node1);
    list_string->add_node(4, string_node2);
    list_string->add_node(8, string_node3);

    list_string->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_add\"" << endl;
};

void test_list_append() {
    cout << "|I| \t\t\tBegin \"test_list_append\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * BOOL LIST APPEND TEST
     */
    auto* list_bool = List<bool>::gen_list(5);

    list_bool->print_list(0);

    auto* bool_node0 = Node<bool>::gen_node();
    auto* bool0 = new bool(true);
    bool_node0->set_data(bool0);
    bool_node0->print_node(0);

    auto* bool_node1 = Node<bool>::gen_node();
    auto* bool1 = new bool(false);
    bool_node1->set_data(bool1);
    bool_node1->print_node(0);

    auto* bool_node2 = Node<bool>::gen_node();
    auto* bool2 = new bool(false);
    bool_node2->set_data(bool2);
    bool_node2->print_node(0);

    auto* bool_node3 = Node<bool>::gen_node();
    auto* bool3 = new bool(true);
    bool_node3->set_data(bool3);
    bool_node3->print_node(0);

    list_bool->append_node(bool_node0);
    list_bool->append_node(bool_node1);
    list_bool->append_node(bool_node2);
    list_bool->append_node(bool_node3);

    list_bool->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * INT LIST APPEND TEST
     */
    auto* list_int = List<int>::gen_list(5);

    list_int->print_list(0);

    auto* int_node0 = Node<int>::gen_node();
    auto* int0 = new int(0);
    int_node0->set_data(int0);
    int_node0->print_node(0);

    auto* int_node1 = Node<int>::gen_node();
    auto* int1 = new int(1);
    int_node1->set_data(int1);
    int_node1->print_node(0);

    auto* int_node2 = Node<int>::gen_node();
    auto* int2 = new int(2);
    int_node2->set_data(int2);
    int_node2->print_node(0);

    auto* int_node3 = Node<int>::gen_node();
    auto* int3 = new int(3);
    int_node3->set_data(int3);
    int_node3->print_node(0);

    list_int->append_node(int_node0);
    list_int->append_node(int_node1);
    list_int->append_node(int_node2);
    list_int->append_node(int_node3);

    list_int->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * CHAR LIST APPEND TEST
     */
    auto* list_char = List<char>::gen_list(5);

    list_char->print_list(0);

    auto* char_node0 = Node<char>::gen_node();
    auto* char0 = new char('0');
    char_node0->set_data(char0);
    char_node0->print_node(0);

    auto* char_node1 = Node<char>::gen_node();
    auto* char1 = new char('1');
    char_node1->set_data(char1);
    char_node1->print_node(0);

    auto* char_node2 = Node<char>::gen_node();
    auto* char2 = new char('2');
    char_node2->set_data(char2);
    char_node2->print_node(0);

    auto* char_node3 = Node<char>::gen_node();
    auto* char3 = new char('3');
    char_node3->set_data(char3);
    char_node3->print_node(0);

    list_char->append_node(char_node0);
    list_char->append_node(char_node1);
    list_char->append_node(char_node2);
    list_char->append_node(char_node3);

    list_char->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * FLOAT LIST APPEND TEST
     */
    auto* list_float = List<float>::gen_list(5);

    list_float->print_list(0);

    auto* float_node0 = Node<float>::gen_node();
    auto* float0 = new float(0.0);
    float_node0->set_data(float0);
    float_node0->print_node(0);

    auto* float_node1 = Node<float>::gen_node();
    auto* float1 = new float(0.1);
    float_node1->set_data(float1);
    float_node1->print_node(0);

    auto* float_node2 = Node<float>::gen_node();
    auto* float2 = new float(0.2);
    float_node2->set_data(float2);
    float_node2->print_node(0);

    auto* float_node3 = Node<float>::gen_node();
    auto* float3 = new float(0.3);
    float_node3->set_data(float3);
    float_node3->print_node(0);

    list_float->append_node(float_node0);
    list_float->append_node(float_node1);
    list_float->append_node(float_node2);
    list_float->append_node(float_node3);

    list_float->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * STRING LIST APPEND TEST
     */
    auto* list_string = List<string>::gen_list(5);

    list_string->print_list(0);

    auto* string_node0 = Node<string>::gen_node();
    auto* string0 = new string("000");
    string_node0->set_data(string0);
    string_node0->print_node(0);

    auto* string_node1 = Node<string>::gen_node();
    auto* string1 = new string("111");
    string_node1->set_data(string1);
    string_node1->print_node(0);

    auto* string_node2 = Node<string>::gen_node();
    auto* string2 = new string("222");
    string_node2->set_data(string2);
    string_node2->print_node(0);

    auto* string_node3 = Node<string>::gen_node();
    auto* string3 = new string("333");
    string_node3->set_data(string3);
    string_node3->print_node(0);

    list_string->append_node(string_node0);
    list_string->append_node(string_node1);
    list_string->append_node(string_node2);
    list_string->append_node(string_node3);

    list_string->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_append\"" << endl;
};

void test_list_del() {
    cout << "|I| \t\t\tBegin \"test_list_del\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * BOOL LIST DEL TEST
     */
    auto* list_bool = List<bool>::gen_list(10);

    list_bool->print_list(0);

    auto* bool_node0 = list_bool->get_tail();

    auto* bool_node1 = list_bool->get_head();

    auto* bool_node2 = bool_node0->get_prev();

    auto* bool_node3 = bool_node1->get_next();

    list_bool->del_node(bool_node0);
    list_bool->del_node(bool_node1);
    list_bool->del_node(bool_node2);
    list_bool->del_node(bool_node3);

    list_bool->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * INT LIST DEL TEST
     */
    auto* list_int = List<int>::gen_list(10);

    list_int->print_list(0);

    auto* int_node0 = list_int->get_tail();

    auto* int_node1 = list_int->get_head();

    auto* int_node2 = int_node0->get_prev();

    auto* int_node3 = int_node1->get_next();

    list_int->del_node(int_node0);
    list_int->del_node(int_node1);
    list_int->del_node(int_node2);
    list_int->del_node(int_node3);

    list_int->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * CHAR LIST DEL TEST
     */
    auto* list_char = List<char>::gen_list(10);

    list_char->print_list(0);

    auto* char_node0 = list_char->get_tail();

    auto* char_node1 = list_char->get_head();

    auto* char_node2 = char_node0->get_prev();

    auto* char_node3 = char_node1->get_next();

    list_char->del_node(char_node0);
    list_char->del_node(char_node1);
    list_char->del_node(char_node2);
    list_char->del_node(char_node3);

    list_char->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * FLOAT LIST DEL TEST
     */
    auto* list_float = List<float>::gen_list(10);

    list_float->print_list(0);

    auto* float_node0 = list_float->get_tail();

    auto* float_node1 = list_float->get_head();

    auto* float_node2 = float_node0->get_prev();

    auto* float_node3 = float_node1->get_next();

    list_float->del_node(float_node0);
    list_float->del_node(float_node1);
    list_float->del_node(float_node2);
    list_float->del_node(float_node3);

    list_float->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    /*
     * STRING LIST DEL TEST
     */
    auto* list_string = List<string>::gen_list(10);

    list_string->print_list(0);

    auto* string_node0 = list_string->get_tail();

    auto* string_node1 = list_string->get_head();

    auto* string_node2 = string_node0->get_prev();

    auto* string_node3 = string_node1->get_next();

    list_string->del_node(string_node0);
    list_string->del_node(string_node1);
    list_string->del_node(string_node2);
    list_string->del_node(string_node3);

    list_string->print_list(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_del\"" << endl;
};

void test_list_find_id() {
    cout << "|I| \t\t\tBegin \"test_list_find_id\"" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| I == information" << endl;
    cout << "|I| E == error" << endl;
    cout << "|I| P = prompt" << endl;
    cout << "|I| ~ == spacer" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;

    int test_id0 = 0;
    int test_id1 = 2;
    int test_id2 = 4;
    int test_id3 = 6;

    auto* list_int = List<int>::gen_list(10);
    list_int->print_list(0);

    Node<int>* found0 = list_int->find_node_id(test_id0);
    found0->print_node(0);

    Node<int>* found1 = list_int->find_node_id(test_id1);
    found1->print_node(0);

    Node<int>* found2 = list_int->find_node_id(test_id2);
    found2->print_node(0);

    Node<int>* found3 = list_int->find_node_id(test_id3);
    found3->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_find_id\"" << endl;
};


int run_node_tests(int mode) {
    switch (mode) {
        case 0:
            try {
                test_node_bool();
                test_node_char();
                test_node_float();
                test_node_int();
                // test_node_string();
            }
            catch (...) {
                return 1;
            }
            break;
        case 1:
            try {
                test_node_bool();
            }
            catch (...) {
                return 2;
            }
            break;
        case 2:
            try {
                test_node_char();
            }
            catch (...) {
                return 3;
            }
            break;
        case 3:
            try {
                test_node_float();
            }
            catch (...) {
                return 4;
            }
            break;
        case 4:
            try {
                test_node_int();
            }
            catch (...) {
                return 5;
            }
            break;
        case 5:
            try {
                //test_node_string();
            }
            catch (...) {
                return 6;
            }
            break;
        default:
            return 7;
    }
};

int run_list_tests(int mode) {
    switch (mode) {
        case 0:
            try {
                test_list_add();
                test_list_append();
                test_list_del();
                test_list_find_id();
                test_list_find_data();
            }
            catch (...) {
                return 1;
            }
            break;
        case 1:
            try {
                test_list_add();
            }
            catch (...) {
                return 2;
            }
            break;
        case 2:
            try {
                test_list_append();
            }
            catch (...) {
                return 3;
            }
            break;
        case 3:
            try {
                test_list_del();
            }
            catch (...) {
                return 4;
            }
            break;
        case 4:
            try {
                test_list_find_id();
            }
            catch (...) {
                return 5;
            }
            break;
        case 5:
            try {
                test_list_find_data();
            }
            catch (...) {
                return 6;
            }
            break;
        default:
            return 7;
    }
};