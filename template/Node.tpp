/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include "Node.hpp"
#include "Config.hpp"
#include <typeinfo>
#include <iostream>
#include <exception>
#include <random>
#include <string>


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
                this->data = nullptr;
                break;
            case 'P':
            case 'A':
            default:
                throw std::errc::invalid_argument;
        }
    }
    catch (std::invalid_argument &ex) {
        this->node_index = -1;
    }
    catch (...) {
        this->node_index = -2;
    }
    this->next = nullptr;
    this->prev = nullptr;
};

template<class T>
Node<T>::Node(bool alloc_data) {
    if (alloc_data) {
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
                    this->data = new T();
                    break;
                case 'P':
                case 'A':
                default:
                    throw std::errc::invalid_argument;
            }
        }
        catch (std::invalid_argument &ex) {
            this->node_index = -1;
        }
        catch (...) {
            this->node_index = -2;
        }
    }
    else {
        this->data = nullptr;
    }
    this->next = nullptr;
    this->prev = nullptr;
};

template<class T>
Node<T>::Node(int input_index, T* input_data, Node<T>* input_prev, Node<T>* input_next) {
    if ((input_index >= 0) && (input_data)) {
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
                case 'P':
                case 'A':
                default:
                    throw std::errc::invalid_argument;
            }
        }
        catch (std::invalid_argument &ex) {
            this->node_index = -1;
        }
        catch (...) {
            this->node_index = -2;
        }
    }
    else {
        this->node_index = -3;
        this->data = nullptr;
        this->next = nullptr;
        this->prev = nullptr;
    }
}

template<class T>
Node<T>::Node(Node<T>* input_node) {
    if (input_node) {
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
                case 'P':
                case 'A':
                default:
                    throw std::errc::invalid_argument;
            }
        }
        catch (std::invalid_argument &ex) {
            this->node_index = -1;
        }
        catch (...) {
            this->node_index = -2;
        }
    }
    else {
        this->node_index = -3;
        this->data = nullptr;
        this->next = nullptr;
        this->prev = nullptr;
    }
}

template<class T>
Node<T>::~Node() {
    if (this->data) {
        delete this->data;
    }
    this->next = nullptr;
    this->prev = nullptr;
    this->node_index = 0;
};

template<class T>
long long int Node<T>::get_index() const {
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
void Node<T>::set_index(long long int input_index) {
    input_index >= 0 ? this->node_index = input_index : this->node_index;
};

template<class T>
void Node<T>::set_data(T* input_data) {
    if (input_data) {
        *this->data = *input_data;
    }
};

template<class T>
void Node<T>::set_next(Node<T>* next_ptr) {
    this->next = next_ptr;
};

template<class T>
void Node<T>::set_prev(Node<T>* prev_ptr) {
    this->prev = prev_ptr;
};

template<class T>
void Node<T>::print_node(int mode) const {
    if (this->data) {
        std::cout << "|I| Data: " << *this->data << std::endl;
    }
    else {
        std::cout << "|I| Data is nullptr " << std::endl;
    }
    std::cout << "|I| \tIndex: " << this->node_index << std::endl;
    switch (mode) {
        case 0:
            this->prev ? std::cout << "|I| \t\tPrev referencing a node" << std::endl
                       : std::cout << "|I| \t\tPrev is nullptr" << std::endl;
            this->next ? std::cout << "|I| \t\tNext referencing a node" << std::endl
                       : std::cout << "|I| \t\tNext is nullptr" << std::endl;
            std::cout << "|~| " << std::endl;
            break;
        case 1:
            if (this->prev) {
                this->prev->print_node(0);
            }
            if (this->next) {
                this->next->print_node(0);
            }
            std::cout << "|~| " << std::endl;
            break;
        default:
            break;
    }
};

template<class T>
Node<int>* Node<T>::gen_node_int() {
    Node<int>* new_node;
    try {
        new_node = new Node<int>(true);
        std::uniform_int_distribution<int> distribution_int(0, 10000);
        std::random_device rd_int;
        std::mt19937 engine_int(rd_int());
        int* new_data_int = new int(distribution_int(engine_int));
        new_node->set_data(new_data_int);

        new_node->set_index(0);
        new_node->set_next(nullptr);
        new_node->set_prev(nullptr);

        return new_node;
    }
    catch (...) {
        return nullptr;
    }
};

template<class T>
Node<float>* Node<T>::gen_node_float() {
    Node<float>* new_node = nullptr;
    try {
        new_node = new Node<float>(true);
        std::uniform_real_distribution<float> distribution_float(0, 1);
        std::random_device rd_float;
        std::mt19937 engine_float(rd_float());
        float* new_data_float = new float(distribution_float(engine_float));
        new_node->set_data(new_data_float);

        new_node->set_index(0);
        new_node->set_next(nullptr);
        new_node->set_prev(nullptr);

        return new_node;
    }
    catch (...) {
        return nullptr;
    }
};


template<class T>
Node<char>* Node<T>::gen_node_char() {
    Node<char>* new_node;
    try {
        new_node = new Node<char>(true);
        std::uniform_int_distribution<char> distribution_char(32, 127);
        std::random_device rd_char;
        std::mt19937 engine_char(rd_char());
        char* new_data_char = new char(distribution_char(engine_char));
        new_node->set_data(new_data_char);

        new_node->set_index(0);
        new_node->set_next(nullptr);
        new_node->set_prev(nullptr);

        return new_node;
    }
    catch (...) {
        return nullptr;
    }
};

template<class T>
Node<bool>* Node<T>::gen_node_bool() {
    Node<bool>* new_node;
    try {
        new_node = new Node<bool>(true);
        std::uniform_int_distribution<unsigned short> distribution_bool(0, 1);
        std::random_device rd_bool;
        std::mt19937 engine_bool(rd_bool());
        bool* new_data_bool = new bool(distribution_bool(engine_bool));
        new_node->set_data(new_data_bool);

        new_node->set_index(0);
        new_node->set_next(nullptr);
        new_node->set_prev(nullptr);

        return new_node;
    }
    catch (...) {
        return nullptr;
    }
};

template<class T>
Node<std::string>* Node<T>::gen_node_str() {
    Node<std::string>* new_node;
    try {
        new_node = new Node<std::string>(true);
        std::uniform_int_distribution<char> distribution_string(32, 127);
        std::random_device rd_string;
        std::mt19937 engine_string(rd_string());
        auto* new_data_string = new std::string("");
        for (int i = 0; i < STR_LEN; i += 1) {
            *new_data_string += distribution_string(engine_string);
        }
        new_node->set_data(new_data_string);
        new_node->set_index(0);
        new_node->set_next(nullptr);
        new_node->set_prev(nullptr);

        return new_node;
    }
    catch (...) {
        return nullptr;
    }
};

template<class T>
Node<std::string>* Node<T>::gen_node_str(int str_len) {
    Node<std::string>* new_node;
    try {
        new_node = new Node<std::string>(true);
        std::uniform_int_distribution<char> distribution_string(32, 127);
        std::random_device rd_string;
        std::mt19937 engine_string(rd_string());
        auto* new_data_string = new std::string("");
        for (int i = 0; i < str_len; i += 1) {
            *new_data_string += distribution_string(engine_string);
        }
        new_node->set_data(new_data_string);
        new_node->set_index(0);
        new_node->set_next(nullptr);
        new_node->set_prev(nullptr);

        return new_node;
    }
    catch (...) {
        return nullptr;
    }
};
