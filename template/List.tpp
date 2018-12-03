/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include "List.hpp"
#include "Config.hpp"
#include <stdexcept>


template<class T>
List<T>::List() {
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
                this->node_count = 0;
                break;
            case 'P':
            case 'A':
            default:
                throw std::errc::invalid_argument;
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
                case 'P':
                case 'A':
                default:
                    this->head = nullptr;
                    this->tail = nullptr;
                    throw std::errc::invalid_argument;
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