/**
 * @title Linked List
 * @project linked_list
 * @filename Node.tpp
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 *
 */

#include <typeinfo>
#include <iostream>
#include <exception>
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
                this->data = new T();
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
                case 'Z':
                    this->node_index = 0;
                    this->prev = NULL;
                    this->next = NULL;
                    delete this->data;
                    break;
                case 'P':
                case 'A':
                default:
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
    std::cout << "|I| ID: " << this->node_index << std::endl;
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
                if (this->data[0]) {
                    std::cout << "|I| Data: True" << std::endl;
                }
                else {
                    std::cout << "|I| Data: False" << std::endl;
                }
                break;
            case 'P':
                std::cout << "|E| Data is a pointer" << std::endl;
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
