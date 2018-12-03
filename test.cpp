/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include <iostream>
#include "test.hpp"
#include "List.hpp"
#include "Node.hpp"
#include "Config.hpp"

using namespace std;


void test_node_bool() {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_node_bool\"" << endl;
    cout << "|~| =============================================" << endl;
    auto* t_id = new int(0);
    auto* t_data0 = new bool(false);
    auto* t_data1 = new bool(true);
    auto* t_data2 = new bool(false);
    auto* t_node0 = new Node<bool>(true);
    auto* t_node1 = new Node<bool>(true);
    auto* t_node2 = new Node<bool>(true);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);

    t_node0->set_index(*t_id);
    t_node0->set_data(t_data0);
    t_node0->set_next(t_node1);
    (*t_id)++;
    t_node1->set_index(*t_id);
    t_node1->set_data(t_data1);
    t_node1->set_prev(t_node0);
    t_node1->set_next(t_node2);
    (*t_id)++;
    t_node2->set_index(*t_id);
    t_node2->set_data(t_data2);
    t_node2->set_prev(t_node1);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_node_bool\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_node_char() {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_node_char\"" << endl;
    cout << "|~| =============================================" << endl;
    auto* t_id = new int(0);
    auto* t_data0 = new signed char('!');
    auto* t_data1 = new signed char('~');
    auto* t_data2 = new signed char('|');
    auto* t_node0 = new Node<signed char>(true);
    auto* t_node1 = new Node<signed char>(true);
    auto* t_node2 = new Node<signed char>(true);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);

    t_node0->set_index(*t_id);
    t_node0->set_data(t_data0);
    t_node0->set_next(t_node1);
    (*t_id)++;
    t_node1->set_index(*t_id);
    t_node1->set_data(t_data1);
    t_node1->set_prev(t_node0);
    t_node1->set_next(t_node2);
    (*t_id)++;
    t_node2->set_index(*t_id);
    t_node2->set_data(t_data2);
    t_node2->set_prev(t_node1);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_node_char\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_node_float() {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_node_float\"" << endl;
    cout << "|~| =============================================" << endl;
    auto* t_id = new int(0);
    auto* t_data0 = new float(0.06);
    auto* t_data1 = new float(9.7);
    auto* t_data2 = new float(3.14);
    auto* t_node0 = new Node<float>(true);
    auto* t_node1 = new Node<float>(true);
    auto* t_node2 = new Node<float>(true);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);

    t_node0->set_index(*t_id);
    t_node0->set_data(t_data0);
    t_node0->set_next(t_node1);
    (*t_id)++;
    t_node1->set_index(*t_id);
    t_node1->set_data(t_data1);
    t_node1->set_prev(t_node0);
    t_node1->set_next(t_node2);
    (*t_id)++;
    t_node2->set_index(*t_id);
    t_node2->set_data(t_data2);
    t_node2->set_prev(t_node1);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_node_float\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_node_int() {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_node_int\"" << endl;
    cout << "|~| =============================================" << endl;
    auto* t_id = new int(0);
    auto* t_data0 = new long long int(11111111111111110);
    auto* t_data1 = new long long int(22222222222222221);
    auto* t_data2 = new long long int(33333333333333332);
    auto* t_node0 = new Node<long long int>(true);
    auto* t_node1 = new Node<long long int>(true);
    auto* t_node2 = new Node<long long int>(true);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);

    t_node0->set_index(*t_id);
    t_node0->set_data(t_data0);
    t_node0->set_next(t_node1);
    (*t_id)++;
    t_node1->set_index(*t_id);
    t_node1->set_data(t_data1);
    t_node1->set_prev(t_node0);
    t_node1->set_next(t_node2);
    (*t_id)++;
    t_node2->set_index(*t_id);
    t_node2->set_data(t_data2);
    t_node2->set_prev(t_node1);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_node_int\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_node_str() {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_node_str\"" << endl;
    cout << "|~| =============================================" << endl;
    auto* t_id = new int(0);
    auto* t_data0 = new string("0 camelCase");
    auto* t_data1 = new string("1 doggo");
    auto* t_data2 = new string("2 |trap|");
    auto* t_node0 = new Node<string>(true);
    auto* t_node1 = new Node<string>(true);
    auto* t_node2 = new Node<string>(true);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);

    t_node0->set_index(*t_id);
    t_node0->set_data(t_data0);
    t_node0->set_next(t_node1);
    (*t_id)++;
    t_node1->set_index(*t_id);
    t_node1->set_data(t_data1);
    t_node1->set_prev(t_node0);
    t_node1->set_next(t_node2);
    (*t_id)++;
    t_node2->set_index(*t_id);
    t_node2->set_data(t_data2);
    t_node2->set_prev(t_node1);

    cout << "|I| \tNode 0" << endl;
    t_node0->print_node(0);
    cout << "|I| \tNode 1" << endl;
    t_node1->print_node(0);
    cout << "|I| \tNode 2" << endl;
    t_node2->print_node(0);
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_node_str\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_list_add(int mode) {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_list_add\"" << endl;
    cout << "|~| =============================================" << endl;
    switch (mode) {
        case 0: {
            //
            // BOOL LIST ADD TEST
            //
            cout << "|I| BOOLEAN" << endl;
            cout << "|~| " << endl;
            List<bool>* list_bool = List<bool>::gen_list_bool(5);

            list_bool->print_list(0);

            auto* bool_node0 = new Node<bool>(true);
            auto* bool0 = new bool(false);
            bool_node0->set_data(bool0);
            bool_node0->print_node(0);

            auto* bool_node1 = new Node<bool>(true);
            auto* bool1 = new bool(false);
            bool_node1->set_data(bool1);
            bool_node1->print_node(0);

            auto* bool_node2 = new Node<bool>(true);
            auto* bool2 = new bool(false);
            bool_node2->set_data(bool2);
            bool_node2->print_node(0);

            auto* bool_node3 = new Node<bool>(true);
            auto* bool3 = new bool(false);
            bool_node3->set_data(bool3);
            bool_node3->print_node(0);

            cout << "|I| \t\tAdding node0 to spot 5" << endl;
            list_bool->add_node(5, bool_node0);
            list_bool->print_list(0);

            cout << "|I| \t\tAdding node1 to spot 6" << endl;
            list_bool->add_node(6, bool_node1);
            list_bool->print_list(0);

            cout << "|I| \t\tAdding node2 to spot 3" << endl;
            list_bool->add_node(3, bool_node2);
            list_bool->print_list(0);

            cout << "|I| \t\tAdding node3 to spot 0" << endl;
            list_bool->add_node(0, bool_node3);
            list_bool->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 1: {
            //
            // INT LIST ADD TEST
            //
            cout << "|I| INTEGER" << endl;
            cout << "|~| " << endl;
            List<int>* list_int = List<int>::gen_list_int(5);

            list_int->print_list(0);

            auto* int_node0 = Node<int>::gen_node_int();
            auto* int0 = new int(0);
            int_node0->set_data(int0);
            int_node0->print_node(0);

            auto* int_node1 = Node<int>::gen_node_int();
            auto* int1 = new int(1);
            int_node1->set_data(int1);
            int_node1->print_node(0);

            auto* int_node2 = Node<int>::gen_node_int();
            auto* int2 = new int(2);
            int_node2->set_data(int2);
            int_node2->print_node(0);

            auto* int_node3 = Node<int>::gen_node_int();
            auto* int3 = new int(3);
            int_node3->set_data(int3);
            int_node3->print_node(0);

            cout << "|I| \t\tAdding node0 to spot 0" << endl;
            list_int->add_node(0, int_node0);
            list_int->print_list(0);

            cout << "|I| \t\tAdding node1 to spot 1" << endl;
            list_int->add_node(1, int_node1);
            list_int->print_list(0);

            cout << "|I| \t\tAdding node2 to spot 1" << endl;
            list_int->add_node(1, int_node2);
            list_int->print_list(0);

            cout << "|I| \t\tAdding node3 to spot 2" << endl;
            list_int->add_node(2, int_node3);
            list_int->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 2: {
            //
            // CHAR LIST ADD TEST
            //
            cout << "|I| CHARACTER" << endl;
            cout << "|~| " << endl;
            List<char>* list_char = List<char>::gen_list_char(5);

            list_char->print_list(0);

            auto* char_node0 = Node<char>::gen_node_char();
            auto* char0 = new char('0');
            char_node0->set_data(char0);
            char_node0->print_node(0);

            auto* char_node1 = Node<char>::gen_node_char();
            auto* char1 = new char('1');
            char_node1->set_data(char1);
            char_node1->print_node(0);

            auto* char_node2 = Node<char>::gen_node_char();
            auto* char2 = new char('2');
            char_node2->set_data(char2);
            char_node2->print_node(0);

            auto* char_node3 = Node<char>::gen_node_char();
            auto* char3 = new char('3');
            char_node3->set_data(char3);
            char_node3->print_node(0);

            cout << "|I| \t\tAdding node0 to spot 0" << endl;
            list_char->add_node(0, char_node0);
            list_char->print_list(0);

            cout << "|I| \t\tAdding node1 to spot 6" << endl;
            list_char->add_node(6, char_node1);
            list_char->print_list(0);

            cout << "|I| \t\tAdding node2 to spot 0" << endl;
            list_char->add_node(0, char_node2);
            list_char->print_list(0);

            cout << "|I| \t\tAdding node3 to spot 1" << endl;
            list_char->add_node(1, char_node3);
            list_char->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 3: {
            //
            // FLOAT LIST ADD TEST
            //
            cout << "|I| FLOATING-POINT" << endl;
            cout << "|~| " << endl;
            List<float>* list_float = List<float>::gen_list_float(5);

            list_float->print_list(0);

            auto* float_node0 = Node<float>::gen_node_float();
            auto* float0 = new float(0.0);
            float_node0->set_data(float0);
            float_node0->print_node(0);

            auto* float_node1 = Node<float>::gen_node_float();
            auto* float1 = new float(0.1);
            float_node1->set_data(float1);
            float_node1->print_node(0);

            auto* float_node2 = Node<float>::gen_node_float();
            auto* float2 = new float(0.2);
            float_node2->set_data(float2);
            float_node2->print_node(0);

            auto* float_node3 = Node<float>::gen_node_float();
            auto* float3 = new float(0.3);
            float_node3->set_data(float3);
            float_node3->print_node(0);

            cout << "|I| \t\tAdding node0 to spot 0" << endl;
            list_float->add_node(0, float_node0);
            list_float->print_list(0);

            cout << "|I| \t\tAdding node1 to spot 0" << endl;
            list_float->add_node(0, float_node1);
            list_float->print_list(0);

            cout << "|I| \t\tAdding node2 to spot 1" << endl;
            list_float->add_node(1, float_node2);
            list_float->print_list(0);

            cout << "|I| \t\tAdding node3 to spot 1" << endl;
            list_float->add_node(1, float_node3);
            list_float->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 4: {
            //
            // STRING LIST ADD TEST
            //
            cout << "|I| C++ STRING" << endl;
            cout << "|~| " << endl;
            List<string>* list_string = List<string>::gen_list_str(5);

            list_string->print_list(0);

            auto* string_node0 = Node<string>::gen_node_str();
            auto* string0 = new string("0");
            string_node0->set_data(string0);
            string_node0->print_node(0);

            auto* string_node1 = Node<string>::gen_node_str();
            auto* string1 = new string("1");
            string_node1->set_data(string1);
            string_node1->print_node(0);

            auto* string_node2 = Node<string>::gen_node_str();
            auto* string2 = new string("2");
            string_node2->set_data(string2);
            string_node2->print_node(0);

            auto* string_node3 = Node<string>::gen_node_str();
            auto* string3 = new string("3");
            string_node3->set_data(string3);
            string_node3->print_node(0);

            cout << "|I| \t\tAdding node0 to spot 0" << endl;
            list_string->add_node(0, string_node0);
            list_string->print_list(0);

            cout << "|I| \t\tAdding node1 to spot 6" << endl;
            list_string->add_node(6, string_node1);
            list_string->print_list(0);

            cout << "|I| \t\tAdding node2 to spot 0" << endl;
            list_string->add_node(0, string_node2);
            list_string->print_list(0);

            cout << "|I| \t\tAdding node3 to spot 1" << endl;
            list_string->add_node(1, string_node3);
            list_string->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        default:
            break;
    }
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_add\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_list_append(int mode) {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_list_append\"" << endl;
    cout << "|~| =============================================" << endl;

    switch (mode) {
        case 0: {
            //
            // BOOL LIST APPEND TEST
            //
            cout << "|I| BOOLEAN" << endl;
            cout << "|~| " << endl;
            List<bool>* list_bool = List<bool>::gen_list_bool(5);

            list_bool->print_list(0);

            auto* bool_node0 = Node<bool>::gen_node_bool();
            auto* bool0 = new bool(true);
            bool_node0->set_data(bool0);
            bool_node0->print_node(0);

            auto* bool_node1 = Node<bool>::gen_node_bool();
            auto* bool1 = new bool(false);
            bool_node1->set_data(bool1);
            bool_node1->print_node(0);

            auto* bool_node2 = Node<bool>::gen_node_bool();
            auto* bool2 = new bool(false);
            bool_node2->set_data(bool2);
            bool_node2->print_node(0);

            auto* bool_node3 = Node<bool>::gen_node_bool();
            auto* bool3 = new bool(true);
            bool_node3->set_data(bool3);
            bool_node3->print_node(0);

            cout << "|I| \t\tAppending node0" << endl;
            list_bool->append_node(bool_node0);
            list_bool->print_list(0);

            cout << "|I| \t\tAppending node1" << endl;
            list_bool->append_node(bool_node1);
            list_bool->print_list(0);

            cout << "|I| \t\tAppending node2" << endl;
            list_bool->append_node(bool_node2);
            list_bool->print_list(0);

            cout << "|I| \t\tAppending node3" << endl;
            list_bool->append_node(bool_node3);
            list_bool->print_list(0);
        }
            break;
        case 1: {
            //
            // INT LIST APPEND TEST
            //
            cout << "|I| INTEGER" << endl;
            cout << "|~| " << endl;
            List<int>* list_int = List<int>::gen_list_int(5);

            list_int->print_list(0);

            auto* int_node0 = Node<int>::gen_node_int();
            auto* int0 = new int(0);
            int_node0->set_data(int0);
            int_node0->print_node(0);

            auto* int_node1 = Node<int>::gen_node_int();
            auto* int1 = new int(1);
            int_node1->set_data(int1);
            int_node1->print_node(0);

            auto* int_node2 = Node<int>::gen_node_int();
            auto* int2 = new int(2);
            int_node2->set_data(int2);
            int_node2->print_node(0);

            auto* int_node3 = Node<int>::gen_node_int();
            auto* int3 = new int(3);
            int_node3->set_data(int3);
            int_node3->print_node(0);

            cout << "|I| \t\tAppending node0" << endl;
            list_int->append_node(int_node0);
            list_int->print_list(0);

            cout << "|I| \t\tAppending node1" << endl;
            list_int->append_node(int_node1);
            list_int->print_list(0);

            cout << "|I| \t\tAppending node2" << endl;
            list_int->append_node(int_node2);
            list_int->print_list(0);

            cout << "|I| \t\tAppending node3" << endl;
            list_int->append_node(int_node3);
            list_int->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 2: {
            //
            // CHAR LIST APPEND TEST
            //
            cout << "|I| CHARACTER" << endl;
            cout << "|~| " << endl;
            List<char>* list_char = List<char>::gen_list_char(5);

            list_char->print_list(0);

            auto* char_node0 = Node<char>::gen_node_char();
            auto* char0 = new char('0');
            char_node0->set_data(char0);
            char_node0->print_node(0);

            auto* char_node1 = Node<char>::gen_node_char();
            auto* char1 = new char('1');
            char_node1->set_data(char1);
            char_node1->print_node(0);

            auto* char_node2 = Node<char>::gen_node_char();
            auto* char2 = new char('2');
            char_node2->set_data(char2);
            char_node2->print_node(0);

            auto* char_node3 = Node<char>::gen_node_char();
            auto* char3 = new char('3');
            char_node3->set_data(char3);
            char_node3->print_node(0);

            cout << "|I| \t\tAppending node0" << endl;
            list_char->append_node(char_node0);
            list_char->print_list(0);

            cout << "|I| \t\tAppending node1" << endl;
            list_char->append_node(char_node1);
            list_char->print_list(0);

            cout << "|I| \t\tAppending node2" << endl;
            list_char->append_node(char_node2);
            list_char->print_list(0);

            cout << "|I| \t\tAppending node3" << endl;
            list_char->append_node(char_node3);
            list_char->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 3: {
            //
            // FLOAT LIST APPEND TEST
            //
            cout << "|I| FLOATING-POINT" << endl;
            cout << "|~| " << endl;
            List<float>* list_float = List<float>::gen_list_float(5);

            list_float->print_list(0);

            auto* float_node0 = Node<float>::gen_node_float();
            auto* float0 = new float(0.0);
            float_node0->set_data(float0);
            float_node0->print_node(0);

            auto* float_node1 = Node<float>::gen_node_float();
            auto* float1 = new float(0.1);
            float_node1->set_data(float1);
            float_node1->print_node(0);

            auto* float_node2 = Node<float>::gen_node_float();
            auto* float2 = new float(0.2);
            float_node2->set_data(float2);
            float_node2->print_node(0);

            auto* float_node3 = Node<float>::gen_node_float();
            auto* float3 = new float(0.3);
            float_node3->set_data(float3);
            float_node3->print_node(0);

            cout << "|I| \t\tAppending node0" << endl;
            list_float->append_node(float_node0);
            list_float->print_list(0);

            cout << "|I| \t\tAppending node1" << endl;
            list_float->append_node(float_node1);
            list_float->print_list(0);

            cout << "|I| \t\tAppending node2" << endl;
            list_float->append_node(float_node2);
            list_float->print_list(0);

            cout << "|I| \t\tAppending node3" << endl;
            list_float->append_node(float_node3);
            list_float->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;

        case 4: {
            //
            // STRING LIST APPEND TEST
            //
            cout << "|I| C++ STRING" << endl;
            cout << "|~| " << endl;
            List<string>* list_str = List<string>::gen_list_str(5);

            list_str->print_list(0);

            auto* str_node0 = Node<string>::gen_node_str();
            auto* string0 = new string("0");
            str_node0->set_data(string0);
            str_node0->print_node(0);

            auto* str_node1 = Node<string>::gen_node_str();
            auto* string1 = new string("1");
            str_node1->set_data(string1);
            str_node1->print_node(0);

            auto* str_node2 = Node<string>::gen_node_str();
            auto* string2 = new string("2");
            str_node2->set_data(string2);
            str_node2->print_node(0);

            auto* str_node3 = Node<string>::gen_node_str();
            auto* string3 = new string("3");
            str_node3->set_data(string3);
            str_node3->print_node(0);

            cout << "|I| \t\tAppending node0" << endl;
            list_str->append_node(str_node0);
            list_str->print_list(0);

            cout << "|I| \t\tAppending node1" << endl;
            list_str->append_node(str_node1);
            list_str->print_list(0);

            cout << "|I| \t\tAppending node2" << endl;
            list_str->append_node(str_node2);
            list_str->print_list(0);

            cout << "|I| \t\tAppending node3" << endl;
            list_str->append_node(str_node3);
            list_str->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        default:
            break;
    }
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_append\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_list_del(int mode) {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_list_del\"" << endl;
    cout << "|~| =============================================" << endl;
    switch (mode) {
        case 0: {
            //
            // BOOL LIST DEL TEST
            //
            cout << "|I| BOOLEAN" << endl;
            cout << "|~| =============================================" << endl;
            List<bool>* list_bool = List<bool>::gen_list_bool(10);
            list_bool->print_list(0);

            auto* bool_node0 = list_bool->get_tail();
            auto* bool_node1 = list_bool->get_head();
            auto* bool_node2 = bool_node0->get_prev();
            auto* bool_node3 = bool_node1->get_next();

            cout << "|I| \t\tRemoving node0" << endl;
            list_bool->remove_node(bool_node0);
            list_bool->print_list(0);

            cout << "|I| \t\tRemoving node1" << endl;
            list_bool->remove_node(bool_node1);
            list_bool->print_list(0);

            cout << "|I| \t\tRemoving node2" << endl;
            list_bool->remove_node(bool_node2);
            list_bool->print_list(0);

            cout << "|I| \t\tRemoving node3" << endl;
            list_bool->remove_node(bool_node3);
            list_bool->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 1: {
            //
            // INT LIST DEL TEST
            //
            cout << "|I| INTEGER" << endl;
            cout << "|~| =============================================" << endl;
            List<int>* list_int = List<int>::gen_list_int(10);
            list_int->print_list(0);

            auto* int_node0 = list_int->get_tail();
            auto* int_node1 = list_int->get_head();
            auto* int_node2 = int_node0->get_prev();
            auto* int_node3 = int_node1->get_next();

            cout << "|I| \t\tRemoving node0" << endl;
            list_int->remove_node(int_node0);
            list_int->print_list(0);

            cout << "|I| \t\tRemoving node1" << endl;
            list_int->remove_node(int_node1);
            list_int->print_list(0);

            cout << "|I| \t\tRemoving node2" << endl;
            list_int->remove_node(int_node2);
            list_int->print_list(0);

            cout << "|I| \t\tRemoving node3" << endl;
            list_int->remove_node(int_node3);
            list_int->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 2: {
            //
            // CHAR LIST DEL TEST
            //
            cout << "|I| CHARACTER" << endl;
            cout << "|~| =============================================" << endl;
            List<char>* list_char = List<char>::gen_list_char(10);

            list_char->print_list(0);

            auto* char_node0 = list_char->get_tail();

            auto* char_node1 = list_char->get_head();

            auto* char_node2 = char_node0->get_prev();

            auto* char_node3 = char_node1->get_next();

            cout << "|I| \t\tRemoving node0" << endl;
            list_char->remove_node(char_node0);
            list_char->print_list(0);

            cout << "|I| \t\tRemoving node1" << endl;
            list_char->remove_node(char_node1);
            list_char->print_list(0);

            cout << "|I| \t\tRemoving node2" << endl;
            list_char->remove_node(char_node2);
            list_char->print_list(0);

            cout << "|I| \t\tRemoving node3" << endl;
            list_char->remove_node(char_node3);
            list_char->print_list(0);
            cout << "|~| =============================================" << endl;
        }
            break;
        case 3: {
            //
            // FLOAT LIST DEL TEST
            //
            cout << "|I| FLOATING-POINT" << endl;
            cout << "|~| =============================================" << endl;
            List<float>* list_float = List<float>::gen_list_float(10);
            list_float->print_list(0);

            auto* float_node0 = list_float->get_tail();
            auto* float_node1 = list_float->get_head();
            auto* float_node2 = float_node0->get_prev();
            auto* float_node3 = float_node1->get_next();

            cout << "|I| \t\tRemoving node0" << endl;
            list_float->remove_node(float_node0);
            list_float->print_list(0);

            cout << "|I| \t\tRemoving node1" << endl;
            list_float->remove_node(float_node1);
            list_float->print_list(0);

            cout << "|I| \t\tRemoving node2" << endl;
            list_float->remove_node(float_node2);
            list_float->print_list(0);

            cout << "|I| \t\tRemoving node3" << endl;
            list_float->remove_node(float_node3);
            list_float->print_list(0);
        }
            break;
        default:
            break;
    }
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_del\"" << endl;
    cout << "|~| =============================================" << endl;
};

void test_list_find_id() {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_list_find_id\"" << endl;
    cout << "|~| =============================================" << endl;

    int test_id0 = 0;
    int test_id1 = 5;
    int test_id2 = 10;
    int test_id3 = 11;

    cout << "|I| Searching for numbers: \"" <<
         test_id0 << "\", \"" <<
         test_id1 << "\", \"" <<
         test_id2 << "\", \"" <<
         test_id3 << "\", " <<
         endl;

    List<int>* list_int = List<int>::gen_list_int(10);
    list_int->print_list(0);

    Node<int>* found0 = list_int->find_node_id(test_id0);
    if (found0) {
        found0->print_node(0);
    }
    else {
        cout << "|I| \"" << test_id0 << "\" not found in list " << endl;
    }

    Node<int>* found1 = list_int->find_node_id(test_id1);
    if (found1) {
        found1->print_node(0);
    }
    else {
        cout << "|I| \"" << test_id1 << "\" not found in list " << endl;
    }

    Node<int>* found2 = list_int->find_node_id(test_id2);
    if (found2) {
        found2->print_node(0);
    }
    else {
        cout << "|I| \"" << test_id2 << "\" not found in list " << endl;
    }

    Node<int>* found3 = list_int->find_node_id(test_id3);
    if (found3) {
        found3->print_node(0);
    }
    else {
        cout << "|I| \"" << test_id3 << "\" not found in list " << endl;
    }

    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_find_id\"" << endl;
    cout << "|~| =============================================" << endl;
};


void test_list_find_data(int mode) {
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tBegin \"test_list_find_data\"" << endl;
    cout << "|~| =============================================" << endl;
    switch (mode) {
        case 0: {
            //
            // INT LIST FIND DATA TEST
            //
            cout << "|I| INTEGER" << endl;
            cout << "|~| =============================================" << endl;
            auto* test_int0 = new int(666);
            auto* test_int1 = new int(10101);
            Node<int>* found_int = nullptr;
            List<int>* list_int = List<int>::gen_list_int(5);
            list_int->print_list(0);

            list_int->get_head()->set_data(test_int0);
            found_int = list_int->find_node_data(test_int0);
            if (found_int) {
                cout << "|I| Found value \"" << *test_int0 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_int0 << "\" not found in list" << endl;
            }

            list_int->print_list(0);
            found_int = list_int->find_node_data(test_int1);
            if (found_int) {
                cout << "|I| Found value \"" << *test_int1 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_int1 << "\" not found in list" << endl;
            }
            cout << "|~| =============================================" << endl;
        }
            break;
        case 1: {
            //
            // BOOL LIST FIND DATA TEST
            //
            cout << "|I| BOOLEAN" << endl;
            cout << "|~| =============================================" << endl;
            auto* test_bool0 = new bool(true);
            auto* test_bool1 = new bool(false);
            Node<bool>* found_bool = nullptr;
            List<bool>* list_bool = List<bool>::gen_list_bool(5);
            list_bool->print_list(0);

            list_bool->get_head()->set_data(test_bool0);
            found_bool = list_bool->find_node_data(test_bool0);
            if (found_bool) {
                cout << "|I| Found value \"" << *test_bool0 << "\" in list" << endl;
            }
            else {
                cout << "|I| Value \"" << *test_bool0 << "\" not found in list" << endl;
            }

            list_bool->print_list(0);
            found_bool = list_bool->find_node_data(test_bool1);
            if (found_bool) {
                cout << "|I| Found value \"" << *test_bool1 << "\" in list" << endl;
            }
            else {
                cout << "|I| Value \"" << *test_bool1 << "\" not found in list" << endl;
            }
            cout << "|~| =============================================" << endl;
        }
            break;
        case 2: {
            //
            // FLOAT LIST FIND DATA TEST
            //
            cout << "|I| FLOATING-POINT" << endl;
            cout << "|~| =============================================" << endl;
            auto* test_float0 = new float(3.14);
            auto* test_float1 = new float(2.781);
            Node<float>* found_float = nullptr;
            List<float>* list_float = List<float>::gen_list_float(5);
            list_float->print_list(0);

            list_float->get_head()->set_data(test_float0);
            found_float = list_float->find_node_data(test_float0);
            if (found_float) {
                cout << "|I| Found value \"" << *test_float0 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_float0 << "\" not found in list" << endl;
            }

            list_float->print_list(0);
            found_float = list_float->find_node_data(test_float1);
            if (found_float) {
                cout << "|I| Found value \"" << *test_float1 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_float1 << "\" not found in list" << endl;
            }
            cout << "|~| =============================================" << endl;
        }
            break;
        case 3: {
            //
            // CHAR LIST FIND DATA TEST
            //
            cout << "|I| CHARACTER" << endl;
            cout << "|~| =============================================" << endl;
            auto* test_char0 = new char('=');
            auto* test_char1 = new char('?');
            Node<char>* found_char = nullptr;
            List<char>* list_char = List<char>::gen_list_char(5);
            list_char->print_list(0);

            list_char->get_head()->set_data(test_char0);
            found_char = list_char->find_node_data(test_char0);
            if (found_char) {
                cout << "|I| Found value \"" << *test_char0 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_char0 << "\" not found in list" << endl;
            }

            found_char = list_char->find_node_data(test_char1);
            list_char->print_list(0);
            if (found_char) {
                cout << "|I| Found value \"" << *test_char1 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_char1 << "\" not found in list" << endl;
            }
            cout << "|~| =============================================" << endl;
        }
            break;
        case 4: {
            //
            // STR LIST FIND DATA TEST
            //
            cout << "|I| STRING" << endl;
            cout << "|~| =============================================" << endl;
            auto* test_str0 = new string("find me!");
            auto* test_str1 = new string("HLEP! CROPSE IN TEH MARTON");
            Node<string>* found_str = nullptr;
            List<string>* list_str = List<string>::gen_list_str(5);
            list_str->print_list(0);

            list_str->get_head()->set_data(test_str0);
            found_str = list_str->find_node_data(test_str0);
            if (found_str) {
                cout << "|I| Found value \"" << *test_str0 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_str0 << "\" not found in list" << endl;
            }

            found_str = list_str->find_node_data(test_str1);
            list_str->print_list(0);
            if (found_str) {
                cout << "|I| Found value \"" << *test_str1 << "\" in list"<< endl;
            }
            else {
                cout << "|I| Value \"" << *test_str1 << "\" not found in list" << endl;
            }
            cout << "|~| =============================================" << endl;
        }
            break;
        default:
            break;
    }
    cout << "|~| =============================================" << endl;
    cout << "|I| \t\t\tEnd \"test_list_find_data\"" << endl;
    cout << "|~| =============================================" << endl;
};

int run_node_tests(int mode) {
    test_info();
    switch (mode) {
        case 0:
            try {
                test_node_bool();
                test_node_char();
                test_node_float();
                test_node_int();
                test_node_str();

                return 0;
            }
            catch (...) {
                return 1;
            }
        case 1:
            try {
                test_node_bool();

                return 0;
            }
            catch (...) {
                return 2;
            }
        case 2:
            try {
                test_node_char();

                return 0;
            }
            catch (...) {
                return 3;
            }
        case 3:
            try {
                test_node_float();

                return 0;
            }
            catch (...) {
                return 4;
            }
        case 4:
            try {
                test_node_int();

                return 0;
            }
            catch (...) {
                return 5;
            }
        case 5:
            try {
                test_node_str();

                return 0;
            }
            catch (...) {
                return 6;
            }
        default:
            return 7;
    }
};

int run_list_tests(int mode) {
    test_info();
    switch (mode) {
        case 0:
            try {
                for(int i = 0; i < 5; i += 1) {
                test_list_add(i);
                test_list_append(i);
                test_list_del(i);
                    test_list_find_data(i);
                }
                test_list_find_id();

                return 0;
            }
            catch (...) {
                return 1;
            }
        case 1:
            try {
                for(int i = 0; i < 5; i += 1) {
                    test_list_add(i);
                }

                return 0;
            }
            catch (...) {
                return 2;
            }
        case 2:
            try {
                for(int i = 0; i < 5; i += 1) {
                    test_list_append(i);
                }

                return 0;
            }
            catch (...) {
                return 3;
            }
        case 3:
            try {
                for(int i = 0; i < 5; i += 1) {
                    test_list_del(i);
                }

                return 0;
            }
            catch (...) {
                return 4;
            }
        case 4:
            try {
                test_list_find_id();

                return 0;
            }
            catch (...) {
                return 5;
            }
        case 5:
            try {
                for(int i = 0; i < 5; i += 1) {
                    test_list_find_data(i);
                }

                return 0;
            }
            catch (...) {
                return 6;
            }
        default:
            return 7;
    }
};

void test_info() {
    cout << "|~| =============================================" << endl;
    cout << "|I| I information" << endl;
    cout << "|I| E error" << endl;
    cout << "|I| P prompt" << endl;
    cout << "|I| ~ spacer" << endl;
    cout << "|~| =============================================" << endl;
}