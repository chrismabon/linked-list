/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include <typeinfo>
#include <iostream>
#include <exception>
#include <random>
#include <string>
#include "../include/Node.h"


template<class T>
Node<T>::Node() {
    try {
        switch (typeid(T).name()[0]) {
            case 's':
            case 't':
            case 'i':
            case 'j':
            case 'l':
            case 'm':
            case 'x':
            case 'y':
            case 'f':
            case 'd':
            case 'e':
            case 'c':
            case 'a':
            case 'h':
            case 'b':
            case 'N':
                this->node_index = 0;
                break;
            case 'P':
            case 'A':
            default:
                throw std::errc::invalid_argument;
        }
        this->data = NULL;
        this->next = NULL;
        this->prev = NULL;
    }
    catch (std::invalid_argument &ex) {
        this->node_index = -1;
    }
    catch (std::exception) {
        this->node_index = -2;
    }
    catch (...) {
        this->node_index = -3;
    }
};

template<class T>
Node<T>::Node(bool alloc_data) {
    try {
        switch (typeid(T).name()[0]) {
            case 's':
            case 't':
            case 'i':
            case 'j':
            case 'l':
            case 'm':
            case 'x':
            case 'y':
            case 'f':
            case 'd':
            case 'e':
            case 'c':
            case 'a':
            case 'h':
            case 'b':
            case 'N':
                if (alloc_data) {
                    this->data = new T();
                }
                else {
                    this->data = NULL;
                }
                this->node_index = 0;
                this->next = NULL;
                this->prev = NULL;
                break;
            case 'P':
            case 'A':
            default:
                this->data = NULL;
                this->next = NULL;
                this->prev = NULL;
                throw std::errc::invalid_argument;
        }
    }
    catch (std::invalid_argument &ex) {
        this->node_index = -1;
    }
    catch (std::exception) {
        this->node_index = -2;
    }
    catch (...) {
        this->node_index = -3;
    }
};

template<class T>
Node<T>::Node(int input_index, T* input_data, Node<T>* input_prev, Node<T>* input_next) {
    try {
        switch (typeid(T).name()[0]) {
            case 's':
            case 't':
            case 'i':
            case 'j':
            case 'l':
            case 'm':
            case 'x':
            case 'y':
            case 'f':
            case 'd':
            case 'e':
            case 'c':
            case 'a':
            case 'h':
            case 'b':
            case 'N':
                this->node_index = input_index;
                this->data = new T();
                *this->data = *input_data;
                this->prev = input_prev;
                this->next = input_next;
                break;
            case 'Z':
                this->node_index = input_index;
                this->data = input_data;
                this->prev = input_prev;
                this->next = input_next;
                break;
            case 'P':
            case 'A':
            default:
                this->data = NULL;
                this->next = NULL;
                this->prev = NULL;
                throw std::errc::invalid_argument;
        }
    }
    catch (std::invalid_argument &ex) {
        this->node_index = -1;
    }
    catch (std::exception) {
        this->node_index = -2;
    }
    catch (...) {
        this->node_index = -3;
    }
}

template<class T>
Node<T>::Node(Node<T>* input_node) {
    try {
        switch (typeid(T).name()[0]) {
            case 's':
            case 't':
            case 'i':
            case 'j':
            case 'l':
            case 'm':
            case 'x':
            case 'y':
            case 'f':
            case 'd':
            case 'e':
            case 'c':
            case 'a':
            case 'h':
            case 'b':
            case 'N':
                this->node_index = input_node->get_index();
                this->data = new T();
                *this->data = *input_node->get_data();
                this->prev = input_node->get_prev();
                this->next = input_node->get_next();
                break;
            case 'Z':
                this->node_index = input_node->get_index();
                this->data = input_node->get_data();
                this->prev = input_node->get_prev();
                this->next = input_node->get_next();
                break;
            case 'P':
            case 'A':
            default:
                this->data = NULL;
                this->next = NULL;
                this->prev = NULL;
                throw std::errc::invalid_argument;
        }
    }
    catch (std::invalid_argument &ex) {
        this->node_index = -1;
    }
    catch (std::exception) {
        this->node_index = -2;
    }
    catch (...) {
        this->node_index = -3;
    }
}

template<class T>
Node<T>::~Node() {
    if (this->data) {
        delete this->data;
    }
    this->next = NULL;
    this->prev = NULL;
    this->node_index = 0;
};

template<class T>
int Node<T>::get_index() const {
    return this->node_index;
}

template<class T>
T* Node<T>::get_data() const {
    return this->data;
};

template<class T>
Node<T>* Node<T>::get_next() const {
    return this->next;
};

template<class T>
Node<T>* Node<T>::get_prev() const {
    return this->prev;
};

template<class T>
void Node<T>::set_index(int input_index) {
    input_index >= 0 ? this->node_index = input_index : this->node_index;
};

template<class T>
void Node<T>::set_data(T* input_data) {
    if (input_data) {
        switch (typeid(*input_data).name()[0]) {
            case 's':
            case 't':
            case 'i':
            case 'j':
            case 'l':
            case 'm':
            case 'x':
            case 'y':
            case 'f':
            case 'd':
            case 'e':
            case 'c':
            case 'a':
            case 'h':
            case 'b':
            case 'N':
                *this->data = *input_data;
                break;
            case 'Z':
                this->data = input_data;
                break;
            default:
                break;
        }
    }
};

template<class T>
void Node<T>::set_next(Node<T>* next_ptr) {
    next_ptr ? this->next = next_ptr : this->next;
};


template<class T>
void Node<T>::set_prev(Node<T>* prev_ptr) {
    prev_ptr ? this->prev = prev_ptr : this->prev;
};

template<class T>
void Node<T>::print_node(int mode) const {
    std::cout << "|I| Index: " << this->node_index << std::endl;
    if (this->data) {
        switch (typeid(*this->data).name()[0]) {
            case 's':
            case 't':
            case 'i':
            case 'j':
            case 'l':
            case 'm':
            case 'x':
            case 'y':
            case 'f':
            case 'd':
            case 'e':
            case 'c':
            case 'a':
            case 'h':
                std::cout << "|I| Data: " << *this->data << std::endl;
                break;
            case 'N':
                std::cout << "|I| Data is a string: " << *this->data << std::endl;
                break;
            case 'b':
                std::cout << "|I| Data: " << *this->data << std::endl;
                (this->data) ? std::cout << "|I| Data: True" << std::endl
                              : std::cout << "|I| Data: False" << std::endl;
                break;
            default:
                std::cout << "|E| Data is of unknown type" << std::endl;
                break;
        }
    }
    switch (mode) {
        case 0:
            this->prev ? std::cout << "|I| Prev referencing a node" << std::endl
                       : std::cout << "|I| Prev is NULL" << std::endl;
            this->next ? std::cout << "|I| Next referencing a node" << std::endl
                       : std::cout << "|I| Next is NULL" << std::endl;
            break;
        case 1:
        default:
            if (this->prev) {
                this->prev->print_node(0);
            }
            if (this->next) {
                this->next->print_node(0);
            }
            break;
    }
};

template<class T>
Node<T>* Node<T>::gen_node() {
    Node<T>* new_node;
    T* type_sample;
    try {
        new_node = new Node<T>(true);
        type_sample = new T();
        switch (typeid(*type_sample).name()[0]) {
            case 's':
                std::uniform_int_distribution<signed short> distribution_short(0, 100);
                std::random_device rd_short;
                std::mt19937 engine_short(rd_short());
                signed short* new_data_short = new signed short(distribution_short(engine_short));
                new_node->set_data(new_data_short);
                break;
            case 't':
                std::uniform_int_distribution<unsigned short> distribution_u_short(0, 100);
                std::random_device rd_u_short;
                std::mt19937 engine_u_short(rd_u_short());
                unsigned short* new_data_u_short = new unsigned short(distribution_u_short(engine_u_short));
                new_node->set_data(new_data_u_short);
                break;
            case 'i':
                std::uniform_int_distribution<signed int> distribution_int(0, 1000);
                std::random_device rd_int;
                std::mt19937 engine_int(rd_int());
                signed int* new_data_int = new signed int(distribution_int(engine_int));
                new_node->set_data(new_data_int);
                break;
            case 'j':
                std::uniform_int_distribution<unsigned int> distribution_u_int(0, 1000);
                std::random_device rd_u_int;
                std::mt19937 engine_u_int(rd_u_int());
                unsigned int* new_data_u_int = new unsigned int(distribution_u_int(engine_u_int));
                new_node->set_data(new_data_u_int);
                break;
            case 'l':
                std::uniform_int_distribution<signed long> distribution_long(0, 10000);
                std::random_device rd_long;
                std::mt19937 engine_long(rd_long());
                signed long* new_data_long = new signed long(distribution_long(engine_long));
                new_node->set_data(new_data_long);
                break;
            case 'm':
                std::uniform_int_distribution<unsigned long> distribution_u_long(0, 10000);
                std::random_device rd_u_long;
                std::mt19937 engine_u_long(rd_u_long());
                unsigned long* new_data_u_long = new unsigned long(distribution_u_long(engine_u_long));
                new_node->set_data(new_data_u_long);
                break;
            case 'x':
                std::uniform_int_distribution<signed long long> distribution_l_long(0, 100000);
                std::random_device rd_l_long;
                std::mt19937 engine_l_long(rd_l_long());
                signed long long* new_data_l_long = new signed long long(distribution_l_long(engine_l_long));
                new_node->set_data(new_data_l_long);
                break;
            case 'y':
                std::uniform_int_distribution<unsigned long long> distribution_u_l_long(0, 100000);
                std::random_device rd_u_l_long;
                std::mt19937 engine_u_l_long(rd_u_l_long());
                unsigned long long* new_data_u_l_long = new unsigned long long(distribution_u_l_long(engine_u_l_long));
                new_node->set_data(new_data_u_l_long);
                break;
            case 'f':
                std::uniform_real_distribution<float> distribution_float(0, 1);
                std::random_device rd_float;
                std::mt19937 engine_float(rd_float());
                float* new_data_float = new float(distribution_float(engine_float));
                new_node->set_data(new_data_float);
                break;
            case 'd':
                std::uniform_real_distribution<double> distribution_double(0, 1);
                std::random_device rd_double;
                std::mt19937 engine_double(rd_double());
                double* new_data_double = new double(distribution_double(engine_double));
                new_node->set_data(new_data_double);
                break;
            case 'e':
                std::uniform_real_distribution<long double> distribution_l_double(0, 1);
                std::random_device rd_l_double;
                std::mt19937 engine_l_double(rd_l_double());
                long double* new_data_l_double = new long double(distribution_l_double(engine_l_double));
                new_node->set_data(new_data_l_double);
                break;
            case 'c':
                std::uniform_int_distribution<char> distribution_char(32, 127);
                std::random_device rd_char;
                std::mt19937 engine_char(rd_char());
                char* new_data_char = new char(distribution_char(engine_char));
                new_node->set_data(new_data_char);
                break;
            case 'a':
                std::uniform_int_distribution<signed char> distribution_s_char(32, 127);
                std::random_device rd_s_char;
                std::mt19937 engine_s_char(rd_s_char());
                signed char* new_data_s_char = new signed char(distribution_s_char(engine_s_char));
                new_node->set_data(new_data_s_char);
                break;
            case 'h':
                std::uniform_int_distribution<unsigned char> distribution_u_char(32, 127);
                std::random_device rd_u_char;
                std::mt19937 engine_u_char(rd_u_char());
                unsigned char* new_data_u_char = new unsigned char(distribution_u_char(engine_u_char));
                new_node->set_data(new_data_u_char);
                break;
            case 'b':
                std::uniform_int_distribution<bool> distribution_bool(0, 1);
                std::random_device rd_bool;
                std::mt19937 engine_bool(rd_bool());
                bool* new_data_bool = new bool(distribution_bool(engine_bool));
                new_node->set_data(new_data_bool);
                break;
            case 'N':
                std::uniform_int_distribution<char> distribution_string(32, 127);
                std::random_device rd_string;
                std::mt19937 engine_string(rd_string());
                std::string* new_data_string = new std::string("");
                for (int i = 0; i < 30; i += 1) {
                    new_data_string[i] = distribution_string(engine_string);
                }
                new_node->set_data(new_data_string);
                break;
            default:
                throw std::errc::invalid_argument;
        }
        new_node->set_index(0);
        new_node->set_next(NULL);
        new_node->set_prev(NULL);
        delete type_sample;
    }
    catch (...) {
        return NULL;
    }

    return new_node;
};
