/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */

#include "../include/List.h"
#include "test_types.h"


void test_list_add() {
    /*
     * BOOL LIST ADD TEST
     */
    List<bool>* list_bool = List::gen_list(5);

    list_bool->print_list(0);

    Node<bool>* bool_node0 = Node::gen_node();
    auto* bool0 = new bool(true);
    bool_node0->set_data(bool0);
    bool_node0->print_node(0);

    Node<bool>* bool_node1 = Node::gen_node();
    auto* bool1 = new bool(false);
    bool_node1->set_data(bool1);
    bool_node1->print_node(0);

    Node<bool>* bool_node2 = Node::gen_node();
    auto* bool2 = new bool(false);
    bool_node2->set_data(bool2);
    bool_node2->print_node(0);

    Node<bool>* bool_node3 = Node::gen_node();
    auto* bool3 = new bool(true);
    bool_node3->set_data(bool3);
    bool_node3->print_node(0);

    list_bool->add_node(0, bool_node0);
    list_bool->add_node(1, bool_node1);
    list_bool->add_node(4, bool_node2);
    list_bool->add_node(8, bool_node3);

    list_bool->print_list(0);

    /*
     * INT LIST ADD TEST
     */
    List<int>* list_int = List::gen_list(5);

    list_int->print_list(0);

    Node<int>* int_node0 = Node::gen_node();
    auto* int0 = new int(0);
    int_node0->set_data(int0);
    int_node0->print_node(0);

    Node<int>* int_node1 = Node::gen_node();
    auto* int1 = new int(1);
    int_node1->set_data(int1);
    int_node1->print_node(0);

    Node<int>* int_node2 = Node::gen_node();
    auto* int2 = new int(2);
    int_node2->set_data(int2);
    int_node2->print_node(0);

    Node<int>* int_node3 = Node::gen_node();
    auto* int3 = new int(3);
    int_node3->set_data(int3);
    int_node3->print_node(0);

    list_int->add_node(0, int_node0);
    list_int->add_node(1, int_node1);
    list_int->add_node(4, int_node2);
    list_int->add_node(8, int_node3);

    list_int->print_list(0);

    /*
     * CHAR LIST ADD TEST
     */
    List<char>* list_char = List::gen_list(5);

    list_char->print_list(0);

    Node<char>* char_node0 = Node::gen_node();
    auto* char0 = new char('0');
    char_node0->set_data(char0);
    char_node0->print_node(0);

    Node<char>* char_node1 = Node::gen_node();
    auto* char1 = new char('1');
    char_node1->set_data(char1);
    char_node1->print_node(0);

    Node<char>* char_node2 = Node::gen_node();
    auto* char2 = new char('2');
    char_node2->set_data(char2);
    char_node2->print_node(0);

    Node<char>* char_node3 = Node::gen_node();
    auto* char3 = new char('3');
    char_node3->set_data(char3);
    char_node3->print_node(0);

    list_char->add_node(0, char_node0);
    list_char->add_node(1, char_node1);
    list_char->add_node(4, char_node2);
    list_char->add_node(8, char_node3);

    list_char->print_list(0);

    /*
     * FLOAT LIST ADD TEST
     */
    List<float>* list_float = List::gen_list(5);

    list_float->print_list(0);

    Node<float>* float_node0 = Node::gen_node();
    auto* float0 = new float(0.0);
    float_node0->set_data(float0);
    float_node0->print_node(0);

    Node<float>* float_node1 = Node::gen_node();
    auto* float1 = new float(0.1);
    float_node1->set_data(float1);
    float_node1->print_node(0);

    Node<float>* float_node2 = Node::gen_node();
    auto* float2 = new float(0.2);
    float_node2->set_data(float2);
    float_node2->print_node(0);

    Node<float>* float_node3 = Node::gen_node();
    auto* float3 = new float(0.3);
    float_node3->set_data(float3);
    float_node3->print_node(0);

    list_float->add_node(0, float_node0);
    list_float->add_node(1, float_node1);
    list_float->add_node(4, float_node2);
    list_float->add_node(8, float_node3);

    list_float->print_list(0);

    /*
     * STRING LIST ADD TEST
     */
    List<std::string>* list_string = List::gen_list(5);

    list_string->print_list(0);

    Node<std::string>* string_node0 = Node::gen_node();
    auto* string0 = new std::string("000");
    string_node0->set_data(string0);
    string_node0->print_node(0);

    Node<std::string>* string_node1 = Node::gen_node();
    auto* string1 = new std::string("111");
    string_node1->set_data(string1);
    string_node1->print_node(0);

    Node<std::string>* string_node2 = Node::gen_node();
    auto* string2 = new std::string("222");
    string_node2->set_data(string2);
    string_node2->print_node(0);

    Node<std::string>* string_node3 = Node::gen_node();
    auto* string3 = new std::string("333");
    string_node3->set_data(string3);
    string_node3->print_node(0);

    list_string->add_node(0, string_node0);
    list_string->add_node(1, string_node1);
    list_string->add_node(4, string_node2);
    list_string->add_node(8, string_node3);

    list_string->print_list(0);
};

void test_list_append() {
    /*
     * BOOL LIST APPEND TEST
     */
    List<bool>* list_bool = List::gen_list(5);

    list_bool->print_list(0);

    Node<bool>* bool_node0 = Node::gen_node();
    auto* bool0 = new bool(true);
    bool_node0->set_data(bool0);
    bool_node0->print_node(0);

    Node<bool>* bool_node1 = Node::gen_node();
    auto* bool1 = new bool(false);
    bool_node1->set_data(bool1);
    bool_node1->print_node(0);

    Node<bool>* bool_node2 = Node::gen_node();
    auto* bool2 = new bool(false);
    bool_node2->set_data(bool2);
    bool_node2->print_node(0);

    Node<bool>* bool_node3 = Node::gen_node();
    auto* bool3 = new bool(true);
    bool_node3->set_data(bool3);
    bool_node3->print_node(0);

    list_bool->append_node(bool_node0);
    list_bool->append_node(bool_node1);
    list_bool->append_node(bool_node2);
    list_bool->append_node(bool_node3);

    list_bool->print_list(0);

    /*
     * INT LIST APPEND TEST
     */
    List<int>* list_int = List::gen_list(5);

    list_int->print_list(0);

    Node<int>* int_node0 = Node::gen_node();
    auto* int0 = new int(0);
    int_node0->set_data(int0);
    int_node0->print_node(0);

    Node<int>* int_node1 = Node::gen_node();
    auto* int1 = new int(1);
    int_node1->set_data(int1);
    int_node1->print_node(0);

    Node<int>* int_node2 = Node::gen_node();
    auto* int2 = new int(2);
    int_node2->set_data(int2);
    int_node2->print_node(0);

    Node<int>* int_node3 = Node::gen_node();
    auto* int3 = new int(3);
    int_node3->set_data(int3);
    int_node3->print_node(0);

    list_int->append_node(int_node0);
    list_int->append_node(int_node1);
    list_int->append_node(int_node2);
    list_int->append_node(int_node3);

    list_int->print_list(0);

    /*
     * CHAR LIST APPEND TEST
     */
    List<char>* list_char = List::gen_list(5);

    list_char->print_list(0);

    Node<char>* char_node0 = Node::gen_node();
    auto* char0 = new char('0');
    char_node0->set_data(char0);
    char_node0->print_node(0);

    Node<char>* char_node1 = Node::gen_node();
    auto* char1 = new char('1');
    char_node1->set_data(char1);
    char_node1->print_node(0);

    Node<char>* char_node2 = Node::gen_node();
    auto* char2 = new char('2');
    char_node2->set_data(char2);
    char_node2->print_node(0);

    Node<char>* char_node3 = Node::gen_node();
    auto* char3 = new char('3');
    char_node3->set_data(char3);
    char_node3->print_node(0);

    list_char->append_node(char_node0);
    list_char->append_node(char_node1);
    list_char->append_node(char_node2);
    list_char->append_node(char_node3);

    list_char->print_list(0);

    /*
     * FLOAT LIST APPEND TEST
     */
    List<float>* list_float = List::gen_list(5);

    list_float->print_list(0);

    Node<float>* float_node0 = Node::gen_node();
    auto* float0 = new float(0.0);
    float_node0->set_data(float0);
    float_node0->print_node(0);

    Node<float>* float_node1 = Node::gen_node();
    auto* float1 = new float(0.1);
    float_node1->set_data(float1);
    float_node1->print_node(0);

    Node<float>* float_node2 = Node::gen_node();
    auto* float2 = new float(0.2);
    float_node2->set_data(float2);
    float_node2->print_node(0);

    Node<float>* float_node3 = Node::gen_node();
    auto* float3 = new float(0.3);
    float_node3->set_data(float3);
    float_node3->print_node(0);

    list_float->append_node(float_node0);
    list_float->append_node(float_node1);
    list_float->append_node(float_node2);
    list_float->append_node(float_node3);

    list_float->print_list(0);

    /*
     * STRING LIST APPEND TEST
     */
    List<std::string>* list_string = List::gen_list(5);

    list_string->print_list(0);

    Node<std::string>* string_node0 = Node::gen_node();
    auto* string0 = new std::string("000");
    string_node0->set_data(string0);
    string_node0->print_node(0);

    Node<std::string>* string_node1 = Node::gen_node();
    auto* string1 = new std::string("111");
    string_node1->set_data(string1);
    string_node1->print_node(0);

    Node<std::string>* string_node2 = Node::gen_node();
    auto* string2 = new std::string("222");
    string_node2->set_data(string2);
    string_node2->print_node(0);

    Node<std::string>* string_node3 = Node::gen_node();
    auto* string3 = new std::string("333");
    string_node3->set_data(string3);
    string_node3->print_node(0);

    list_string->append_node(string_node0);
    list_string->append_node(string_node1);
    list_string->append_node(string_node2);
    list_string->append_node(string_node3);

    list_string->print_list(0);
};

void test_list_del() {
    /*
     * BOOL LIST ADD TEST
     */
    List<bool>* list_bool = List::gen_list(10);

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

    /*
     * INT LIST ADD TEST
     */
    List<int>* list_int = List::gen_list(10);

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

    /*
     * CHAR LIST ADD TEST
     */
    List<char>* list_char = List::gen_list(10);

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

    /*
     * FLOAT LIST ADD TEST
     */
    List<float>* list_float = List::gen_list(10);

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

    /*
     * STRING LIST ADD TEST
     */
    List<std::string>* list_string = List::gen_list(10);

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
};

void test_list_find_id() {
    int test_id0 = 0;
    int test_id1 = 2;
    int test_id2 = 4;
    int test_id3 = 6;

    List<int>* list_int = List::gen_list(10);
    list_int->print_list(0);

    Node<int>* found0 = list_int->find_node_id(test_id0);
    found0->print_node(0);

    Node<int>* found1 = list_int->find_node_id(test_id1);
    found1->print_node(0);

    Node<int>* found2 = list_int->find_node_id(test_id2);
    found2->print_node(0);

    Node<int>* found3 = list_int->find_node_id(test_id3);
    found3->print_node(0);
};