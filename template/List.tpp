/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#include "../include/List.h"
#include "../include/Config.h"
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
    catch (std::exception) {
        this->node_count = -2;
    }
    catch (...) {
        this->node_count = -3;
    }
    this->head = NULL;
    this->tail = NULL;
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
                    this->head = NULL;
                    this->tail = NULL;
                    throw std::errc::invalid_argument;
            }
        }
        catch (std::invalid_argument &ex) {
            this->node_count = -1;
        }
        catch (std::exception) {
            this->node_count = -2;
        }
        catch (...) {
            this->node_count = -3;
        }
    }
};

template<class T>
List<T>::~List() {
    if (this->head && this->tail) {
        if (this->node_count == 1) {
            delete this->head;
            this->node_count -= 1;
            this->head = NULL;
            this->tail = NULL;

        }
        else if (this->node_count > 1) {
            Node<T>* cur = this->tail;
            Node<T>* cur_prev = cur->get_prev();
            while (cur) {
                if (cur_prev == this->head) {
                    delete cur;
                    delete cur_prev;
                    this->dec_count(INCDEC_AMT * 2);
                    this->tail = NULL;
                    this->head = NULL;
                    cur = NULL;
                }
                else {
                    delete cur;
                    this->dec_count(INCDEC_AMT);
                    cur = cur_prev;
                    cur_prev = cur_prev->get_prev();
                    this->tail = cur;
                }
            }
        }
    }
};

template<class T>
int List<T>::get_count() const {
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
void List<T>::set_count(int input_count) {
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
void List<T>::add_node(int index, Node<T>* input_node) {
    try {
        if (input_node && (index < this->node_count)) {
            Node<T>* prev_node = NULL;
            Node<T>* next_node = NULL;
            if (this->head && this->tail) {
                if (!index) {
                    next_node = this->head;
                    prev_node = input_node;
                    this->head = input_node;
                    input_node->set_next(next_node);
                    next_node->set_prev(input_node);
                    this->inc_count(INCDEC_AMT);
                }
                else if (index > 0) {
                    prev_node = this->find_node_id(index);
                    if (prev_node) {
                        if (prev_node == this->tail) {
                            this->append_node(input_node);
                            this->inc_count(INCDEC_AMT);
                        }
                        else {
                            next_node = prev_node->get_next();
                            input_node->set_next(next_node);
                            input_node->set_prev(prev_node);
                            next_node->set_prev(input_node);
                            prev_node->set_next(input_node);
                            this->inc_count(INCDEC_AMT);
                        }
                    }
                    else {
                        throw std::errc::result_out_of_range;
                    }
                }
            }
            else {
                throw std::errc::invalid_argument;
            }
        }
        else {
            if (index >= this->node_count) {
                throw std::errc::result_out_of_range;
            }
            else {
                throw std::errc::invalid_argument;
            }
        }
    }
    catch (std::invalid_argument &ex) {
        std::cout << "|E| Invalid argument: \n|E| " << ex.what() << std::endl;
    }
    catch (std::range_error &ex) {
        std::cout << "|E| Specified index outside of list range: \n|E| " << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "|E| Unknown error attempting to add a node to the list" << std::endl;
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
            this->inc_count(INCDEC_AMT);
        }
        else {
            this->set_head(input_node);
            this->set_tail(input_node);
            this->inc_count(INCDEC_AMT);
        }
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
                this->dec_count(INCDEC_AMT);
                delete input_node;
            }
        }
        else if ((input_node == this->head) && (input_node != this->tail)) {
            input_node->get_next() ? cur_next = input_node->get_next() : cur_next = NULL;
            if (cur_next) {
                this->head = cur_next;
                cur_next->set_prev(NULL);
                this->dec_count(INCDEC_AMT);
                delete input_node;
            }
        }
        else if ((input_node != this->head) && (input_node == this->tail)) {
            input_node->get_prev() ? cur_prev = input_node->get_prev() : cur_prev = NULL;
            if (cur_prev) {
                this->tail = cur_prev;
                cur_prev->set_next(NULL);
                this->dec_count(INCDEC_AMT);
                delete input_node;
            }
        }
        else if ((input_node == this->head) && (input_node == this->tail)) {
            this->set_head(NULL);
            this->set_tail(NULL);
            this->dec_count(INCDEC_AMT);
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

template<class T>
List<T>* List<T>::gen_list(int num_nodes) {
    List<T>* new_list = NULL;
    if (num_nodes > 0) {
        new_list = new List<T>();
        Node<T>* new_node;
        for (int i = 0; i < num_nodes; i += 1) {
            new_node = Node<T>::gen_node();
            new_node->set_index(new_list->get_count());
            new_list->append_node(new_node);
        }
    }

    return new_list;
};
