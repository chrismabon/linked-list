/**
 * @title Linked List class template
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include "Config.hpp"
#include "List.hpp"
#include <typeinfo>
#include <iostream>
#include <exception>
#include <random>
#include <string>
#include <stdexcept>


template<class T>
Node<T>::Node() {
    try {
        switch (typeid(T).name()[0]) {
            case 'P':
            case 'p':
            case 'A':
            case 'a':
            case 'Z':
            case 'z':
                throw std::errc::invalid_argument;
            default:
                this->node_index = 0;
                this->data = nullptr;
                break;
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
                case 'P':
                case 'p':
                case 'A':
                case 'a':
                case 'Z':
                case 'z':
                    throw std::errc::invalid_argument;
                default:
                    this->node_index = 0;
                    this->data = new T();
                    break;
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
                case 'P':
                case 'p':
                case 'A':
                case 'a':
                case 'Z':
                case 'z':
                    throw std::errc::invalid_argument;
                default:
                    this->node_index = input_index;
                    this->data = new T();
                    *this->data = *input_data;
                    this->prev = input_prev;
                    this->next = input_next;
                    break;
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
                case 'P':
                case 'p':
                case 'A':
                case 'a':
                case 'Z':
                case 'z':
                    throw std::errc::invalid_argument;
                default:
                    this->node_index = input_node->get_index();
                    this->data = new T();
                    *this->data = *input_node->get_data();
                    this->prev = input_node->get_prev();
                    this->next = input_node->get_next();
                    break;
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
        for (int i = 0; i < STR_NODE_GEN_LENGTH; i += 1) {
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

template<class T>
List<T>::List() {
    try {
        switch (typeid(T).name()[0]) {
            case 'P':
            case 'p':
            case 'A':
            case 'a':
            case 'Z':
            case 'z':
                throw std::errc::invalid_argument;
            default:
                this->node_count = 0;
                break;
        }
    }
    catch (std::invalid_argument &ex) {
        this->node_count = -1;
    }
    catch (...) {
        this->node_count = -2;
    }
    this->head = nullptr;
    this->tail = nullptr;
};

template<class T>
List<T>::List(List<T>* input_list) {
    if (input_list) {
        try {
            switch (typeid(T).name()[0]) {
                case 'P':
                case 'p':
                case 'A':
                case 'a':
                case 'Z':
                case 'z':
                    this->head = nullptr;
                    this->tail = nullptr;
                    throw std::errc::invalid_argument;
                default:
                    if (input_list->get_head() && input_list->get_count()) {
                        Node<T>* cur = input_list->get_head();
                        Node<T>* cur_next = cur->get_next();
                        Node<T>* new_node;
                        while (cur) {
                            new_node = new Node<T>(cur);
                            this->append_node(new_node);
                            cur = cur->get_next();
                        }
                    };
                    break;
            }
        }
        catch (std::invalid_argument &ex) {
            this->node_count = -1;
        }
        catch (...) {
            this->node_count = -2;
        }
    }
};

template<class T>
List<T>::~List() {
    if (this->head && this->tail) {
        if (this->node_count == 1) {
            delete this->head;
            this->dec_count();
            this->head = nullptr;
            this->tail = nullptr;

        }
        else if (this->node_count > 1) {
            Node<T>* cur = this->tail;
            Node<T>* cur_prev = cur->get_prev();
            while (cur) {
                if (cur_prev == this->head) {
                    delete cur;
                    delete cur_prev;
                    this->dec_count(2);
                    this->tail = nullptr;
                    this->head = nullptr;
                    cur = nullptr;
                }
                else {
                    delete cur;
                    this->dec_count();
                    cur = cur_prev;
                    cur_prev = cur_prev->get_prev();
                    this->tail = cur;
                }
            }
        }
    }
};

template<class T>
long long int List<T>::get_id() const {
    return this->list_id;
};

template<class T>
long long int List<T>::get_count() const {
    return this->node_count;
};

template<class T>
Node<T>* List<T>::get_head() const {
    return this->head;
};

template<class T>
Node<T>* List<T>::get_tail() const {
    return this->tail;
};

template<class T>
void List<T>::set_id(long long int input_id) {
    (this->list_id >= 0) ? this->list_id = input_id : this->list_id;
};

template<class T>
void List<T>::set_count(long long int input_count) {
    (this->node_count >= 0) ? this->node_count = input_count : this->node_count;
};

template<class T>
void List<T>::set_head(Node<T>* input_head) {
    this->head = input_head;
};

template<class T>
void List<T>::set_tail(Node<T>* input_tail) {
    this->tail = input_tail;
};

template<class T>
void List<T>::inc_count(int incrmt) {
    incrmt ? this->node_count += incrmt : incrmt;
};

template<class T>
void List<T>::dec_count(int decrmt) {
    decrmt ? this->node_count -= decrmt : decrmt;
};

template<class T>
void List<T>::inc_count() {
    this->node_count += 1;
};

template<class T>
void List<T>::dec_count() {
    this->node_count -= 1;
};


template<class T>
void List<T>::print_list(int mode) const {
    if (this) {
        Node<T>* cursor = nullptr;
        if (this->head) {
            cursor = this->head;
        }
        if (cursor && this->get_count()) {
            std::cout << "|~| " << std::endl;
            std::cout << "|I| Printing list with "
                      << this->get_count() << " nodes" << std::endl;
            std::cout << "|~| " << std::endl;

            while (cursor && this->get_count()) {
                cursor->print_node(mode);
                cursor = cursor->get_next();
            }
            std::cout << "|~| " << std::endl;
            std::cout << "|I| Done" << std::endl;
            std::cout << "|~| " << std::endl;
        }
    }
};

template<class T>
void List<T>::add_node(int index, Node<T>* input_node) {
    if (input_node && (index >= 0)) {
        if (this->head && this->tail) {
            Node<T>* prev_node = nullptr;
            Node<T>* next_node = nullptr;
            if (!index) {
                next_node = this->head;
                this->head = input_node;
                input_node->set_next(next_node);
                next_node->set_prev(input_node);
                this->inc_count();
            }
            else if (index == this->node_count) {
                this->append_node(input_node);
            }
            else if ((index > 0) && (index < this->node_count)) {
                next_node = this->find_node_id(index);
                if (next_node) {
                    prev_node = next_node->get_prev();
                    input_node->set_next(next_node);
                    input_node->set_prev(prev_node);
                    next_node->set_prev(input_node);
                    prev_node->set_next(input_node);
                    this->inc_count();
                }
            }
        }
        else {
            this->head = input_node;
            this->tail = input_node;
            this->inc_count();
        }
        this->refresh_nodes();
    }
};

template<class T>
void List<T>::append_node(Node<T>* input_node) {
    if (input_node) {
        if (this->tail && this->get_count()) {
            this->tail->set_next(input_node);
            input_node->set_prev(this->tail);
            this->tail = input_node;
        }
        else {
            this->tail = input_node;
            this->head = input_node;
        }
        this->inc_count();
        this->refresh_nodes();
    }
};

template<class T>
void List<T>::remove_node(Node<T>* input_node) {
    if (this->get_count() && input_node) {
        Node<T>* cur_next = nullptr;
        Node<T>* cur_prev = nullptr;
        if ((input_node != this->head) && (input_node != this->tail)) {
            input_node->get_next() ? cur_next = input_node->get_next() : cur_next = nullptr;
            input_node->get_prev() ? cur_prev = input_node->get_prev() : cur_prev = nullptr;
            if (cur_next && cur_prev) {
                cur_next->set_prev(cur_prev);
                cur_prev->set_next(cur_next);
                delete input_node;
                input_node->set_next(nullptr);
                input_node->set_prev(nullptr);
                this->dec_count();
            }
        }
        else if ((input_node == this->head) && (input_node != this->tail)) {
            cur_next = input_node->get_next();
            if (cur_next) {
                this->head = cur_next;
                delete input_node;
                cur_next->set_prev(nullptr);
                this->dec_count();
            }
        }
        else if ((input_node != this->head) && (input_node == this->tail)) {
            cur_prev = input_node->get_prev();
            if (cur_prev) {
                this->tail = cur_prev;
                delete input_node;
                cur_prev->set_next(nullptr);
                this->dec_count();
            }
        }
        else if ((input_node == this->head) && (input_node == this->tail)) {
            delete input_node;
            this->set_head(nullptr);
            this->set_tail(nullptr);
            this->dec_count();
        }
        this->refresh_nodes();
    }
};

template<class T>
void List<T>::update_node(int input_index, T* input_data) {
    if (this->get_count() && this->get_head()) {
        Node<T>* cur = this->get_head();
        if ((input_index >= 0) && (input_index < this->get_count()) && input_data) {
            while ((cur->get_index() != input_index) && cur) {
                cur = cur->get_next();
            }
            if (cur) {
                cur->set_data(input_data);
            }
        }
    }
};

template<class T>
void List<T>::refresh_nodes() {
    Node<T>* cur = nullptr;
    if (this->get_count() && this->get_head()) {
        cur = this->get_head();
        int i = 0;
        while (cur && (i < this->get_count())) {
            cur->set_index(i);
            cur = cur->get_next();
            i += 1;
        }
    }
};

template<class T>
Node<T>* List<T>::find_node_data(T* input_data) const {
    Node<T>* cur = nullptr;
    if (this->head && input_data) {
        cur = this->head;

        while (cur && (*input_data != *cur->get_data())) {
            cur = cur->get_next();
        }
    }

    return cur;
};

template<class T>
Node<T>* List<T>::find_node_id(int input_id) const {
    Node<T>* cur = nullptr;
    if (input_id >= 0) {
        if (input_id == (this->node_count - 1)) {
            if (this->tail) {
                cur = this->tail;
            }
        }
        else if (input_id < this->node_count) {
            if (this->head) {
                cur = this->head;
                while (cur && (cur->get_index() != input_id)) {
                    cur = cur->get_next();
                }
            }
        }
    }

    return cur;
};

template<class T>
List<T>* List<T>::gen_list_int(int num_nodes) {
    List<T>* new_list = nullptr;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node_int();
            new_list->append_node(new_node);
        }
        new_list->refresh_nodes();
    }

    return new_list;
};

template<class T>
List<T>* List<T>::gen_list_float(int num_nodes) {
    List<T>* new_list = nullptr;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node_float();
            new_list->append_node(new_node);
        }
        new_list->refresh_nodes();
    }

    return new_list;
};

template<class T>
List<T>* List<T>::gen_list_char(int num_nodes) {
    List<T>* new_list = nullptr;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node_char();
            new_list->append_node(new_node);
        }
        new_list->refresh_nodes();
    }

    return new_list;
};

template<class T>
List<T>* List<T>::gen_list_bool(int num_nodes) {
    List<T>* new_list = nullptr;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node_bool();
            new_list->append_node(new_node);
        }
        new_list->refresh_nodes();
    }

    return new_list;
};

template<class T>
List<T>* List<T>::gen_list_str(int num_nodes) {
    List<T>* new_list = nullptr;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node_str();
            new_list->append_node(new_node);
        }
        new_list->refresh_nodes();
    }

    return new_list;
};

template<class T>
List<T>* List<T>::gen_list_str(int num_nodes, int str_length) {
    List<T>* new_list = nullptr;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node_str(str_length);
            new_list->append_node(new_node);
        }
        new_list->refresh_nodes();
    }

    return new_list;
};