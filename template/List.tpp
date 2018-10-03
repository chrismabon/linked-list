/**
 * @title Linked List
 * @project linked_list
 * @filename List.tpp
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 *
 */

#include "../include/List.h"


template<class T>
List<T>::List() {
    this->node_count = 0;
    this->head = NULL;
    this->tail = NULL;
};

template<class T>
List<T>::~List() {
    this->node_count = 0;
    this->head = NULL;
    this->tail = NULL;
};

template<class T>
int List<T>::get_count() const {
    return this->node_count;
};

template<class T>
void List<T>::set_count(int input_count) {
    this->node_count = input_count;
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
Node<T>* List<T>::get_head() const {
    return this->head;
};

template<class T>
void List<T>::set_head(Node<T>* input_head) {
    this->head = input_head;
};

template<class T>
Node<T>* List<T>::get_tail() const {
    return this->tail;
};

template<class T>
void List<T>::set_tail(Node<T>* input_tail) {
    this->tail = input_tail;
};

template<class T>
void List<T>::print_list(int mode) const {
    if (this) {
        Node<T>* cursor;
        this->head ? cursor = this->head : cursor = NULL;
        (cursor && this->get_count()) ? std::cout << "|Info| Printing list with "
                                                  << this->get_count() << " nodes" << std::endl : NULL;
        while (cursor && this->get_count()) {
            cursor = cursor->get_next();
            cursor->print_node(mode);
        }
        std::cout << "|Info| Done" << std::endl;
        std::cout << "|Info| Done" << std::endl;
    }
};

template<class T>
void List<T>::append_node(Node<T>* input_node) {
    if (input_node) {
        input_node->set_index(this->get_count());
        if (this->tail) {
            this->tail->set_next(input_node);
            input_node->set_prev(this->tail);
            this->tail = input_node;
        }
        else {
            this->set_head(input_node);
            this->set_tail(input_node);
        }
        this->inc_count();
    }
};

template<class T>
void List<T>::del_node(Node<T>* input_node) {
    if (input_node) {
        Node<T>* cur_next = NULL;
        Node<T>* cur_prev = NULL;
        if ((input_node != this->head) && (input_node != this->tail)) {
            input_node->get_next() ? cur_next = input_node->get_next() : cur_next = NULL;
            input_node->get_prev() ? cur_prev = input_node->get_prev() : cur_prev = NULL;
            if (cur_next && cur_prev) {
                cur_next->set_prev(cur_prev);
                cur_prev->set_next(cur_next);
                input_node->set_next(NULL);
                input_node->set_prev(NULL);
                this->dec_count();
                delete input_node;
            }
        }
        else if ((input_node == this->head) && (input_node != this->tail)) {
            input_node->get_next() ? cur_next = input_node->get_next() : cur_next = NULL;
            if (cur_next) {
                this->head = cur_next;
                cur_next->set_prev(NULL);
                this->dec_count();
                delete input_node;
            }
        }
        else if ((input_node != this->head) && (input_node == this->tail)) {
            input_node->get_prev() ? cur_prev = input_node->get_prev() : cur_prev = NULL;
            if (cur_prev) {
                this->tail = cur_prev;
                cur_prev->set_next(NULL);
                this->dec_count();
                delete input_node;
            }
        }
        else if ((input_node == this->head) && (input_node == this->tail)) {
            this->set_head(NULL);
            this->set_tail(NULL);
            this->dec_count();
            delete input_node;
        }
    }
}

template<class T>
Node<T>* List<T>::find_node_data(T* input_data) const {
    Node<T>* cur = NULL;
    if (this->head && input_data) {
        cur = this->head;

        while (cur && (*input_data != cur->get_data())) {
            cur = cur->get_next();
        }
    }
    return cur;
};

template<class T>
Node<T>* List<T>::find_node_id(int input_id) const {
    Node<T>* cur = NULL;
    if (this->head) {
        cur = this->head;

        while (cur && (input_id != cur->get_index())) {
            cur = cur->get_next();
        }
    }
    return cur;
};
