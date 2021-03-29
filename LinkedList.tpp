/**
 * @title Linked List class template
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


// length of any randomly-generated strings
#define STR_NODE_GEN_LENGTH 10

#include <string>
#include <typeinfo>
#include <iostream>
#include <exception>
#include <random>
#include <string>
#include <stdexcept>

// #################
// ## DEFINITIONS ##
// #################

/* ||NODE CLASS TEMPLATE||
 *
 * TYPES ACCEPTED
 * -Boolean
 * -integers
 * -characters
 * -floating-point
 * -C++ strings (no NULL-terminated C strings!)
 *      (WARNING: List class does ->*NOT*<- free dynamically-allocated
 *      vars inside struct/union/class nodes!)
 */
template<class T>
class Node {
public:
    /* ||DEFAULT CONSTRUCTOR||
     *
     * BEHAVIOR
     * -DOES NOT allocate space for the "data" var ("data" is NULL)
     * -all other fields set to 0 (NULL for "next" and "prev" links)
     */
    Node<T>();

    /* ||SECONDARY CONSTRUCTOR||
     *
     * BEHAVIOR
     * -allocates space for the "data" var upon passing >0 or "true"
     * -does not allocate space for "data" var upon passing 0 or "false"
     * -all other fields set to 0 (NULL for "next" and "prev" links)
     *
     * ARGUMENTS
     * -boolean determining "data" allocation behavior
     */
    explicit Node<T>(bool alloc_data);

    /* ||"VERBATIM" CONSTRUCTOR||
     *
     * BEHAVIOR
     * -verbatim constructor, all fields are assigned via arguments
     *
     * ARGUMENTS
     * -node index, pointer to data, pointer to prev node, and pointer to next node in list
     */
    Node<T>(int input_index, T* input_data, Node<T>* input_prev, Node<T>* input_next);

    /* ||COPY CONSTRUCTOR||
     *
     * BEHAVIOR
     * -copy constructor 0
     * -copies everything using get() calls to the input node
     *
     * ARGUMENTS
     * -pointer to a Node<T>
     */
    explicit Node<T>(Node<T>* input_node);

    /* ||DESTRUCTOR||
     *
     * BEHAVIOR
     * -"data" var memory is freed
     * -(WARNING) dynamically-allocated vars within structs, unions, and classes
     *      are ->*NOT*<- freed because type_id() cannot tell them apart and member
     *      vars are not known beforehand
     * -all other fields set to 0 (NULL for "next" and "prev" links)
     * -if data type is somehow an array or pointer,
     *      "data" var is NOT freed
     */
    virtual ~Node<T>();

    /* ||GET INDEX||
     *
     * BEHAVIOR
     * -naively returns "node_index"
     */
    long long int get_index() const;

    /* ||GET DATA, LINKS||
     *
     * BEHAVIOR
     * -naively returns pointers to "data", "next" and "prev" members
     */
    T* get_data() const;

    Node<T>* get_next() const;

    Node<T>* get_prev() const;

    /* ||SET INDEX||
     *
     * BEHAVIOR
     * -if passed an integer >= 0, sets "node_index" to input var
     *
     * ARGUMENTS
     * -standard integer type, must be positive or zero
     */
    void set_index(long long int input_index);

    /* ||SET DATA||
     *
     * BEHAVIOR
     * -if input var != NULL, assigns input var to "data" var
     *      with respect to template data type
     *
     * ARGUMENTS
     * -pointer to input data var
     */
    void set_data(T* input_data);

    /* ||SET LINKS||
     *
     * BEHAVIOR
     * -naively assigns pointer input to "next" or "prev" link
     *
     * ARGUMENTS
     * -pointer to next or prev node
     */
    void set_next(Node<T>* next_ptr);

    void set_prev(Node<T>* prev_ptr);

    /* ||PRINT NODE||
     *
     * BEHAVIOR
     * -three modes are available to adjust output (see ARGUMENTS)
     * -if passed a negative integer, function does nothing
     * -if data var points to null, function does nothing
     *
     * ARGUMENTS
     * -pass 0 to print only node link addresses
     * -pass 1 to print adjacent nodes as well
     * -pass any integer >1 to prevent link-printing operations
     */
    void print_node(int mode) const;

    /* ||NODE GENERATORS||
     *
     * BEHAVIOR
     * -generates a new Node with randomized integer, float,
     *      character, string, or boolean data value
     */
    static Node<int>* gen_node_int();

    static Node<float>* gen_node_float();

    static Node<char>* gen_node_char();

    static Node<bool>* gen_node_bool();

    static Node<std::string>* gen_node_str();

    static Node<std::string>* gen_node_str(int str_len);

private:
    long long int node_index; // assigned upon addition to the list
    T* data;        // pointer to data var
    Node<T>* next;  // links to subsequent and preceding nodes
    Node<T>* prev;  // (may be NULL to indicate the absence of one or both neighbors)
};

/* ||LINKED LIST CLASS TEMPLATE||
 *
 * TEMPLATE
 * -List class
 *
 * TYPES ACCEPTED
 * -Boolean
 * -integers
 * -characters
 * -floating-point
 * -C++ strings (no NULL-terminated C strings!)
 *      (WARNING: List class does ->*NOT*<- free dynamically-allocated
 *      vars inside struct/union/class nodes!)
 */
template<class T>
class List {
public:
    /* ||DEFAULT CONSTRUCTOR||
     *
     * BEHAVIOR
     * -sets "node_count" to zero, and link vars to NULL
     */
    List<T>();

    /* ||COPY CONSTRUCTOR||
     *
     * BEHAVIOR
     * -traverses the input list and attempts to copy the fields of each node into
     *      new nodes to be inserted into the list
     * -does nothing if passed NULL
     *
     * ARGUMENTS
     * -"input_list" must contain at least one node
     */
    explicit List<T>(List<T>* input_list);

    /* ||DESTRUCTOR||
     *
     * BEHAVIOR
     * -traverses the list, freeing every node allocated
     * -WARNING: dynamically-allocated vars inside structs, unions, or classes used
     *      as a data type for nodes are ->*NOT*<- freed!
     * -sets "node_count" to zero, and link vars to NULL
     */
    virtual ~List<T>();

    /* ||GETS||
     *
     * BEHAVIOR
     * -naively returns member vars
     */
    long long int get_id() const;

    long long int get_count() const;

    Node<T>* get_head() const;

    Node<T>* get_tail() const;

    /* ||SET COUNT AND ID||
     *
     * BEHAVIOR
     * -checks to ensure input is non-negative
     *
     * ARGUMENTS
     * -accepts a large integer to assign to "node_count"
     *      or "list_id" respectively
     */
    void set_id(long long int input_id);

    void set_count(long long int input_count);

    /* ||SET LINKS||
     *
     * BEHAVIOR
     * -assigns to "head" or "tail" without checking for NULL input
     *
     * ARGUMENTS
     * -accepts pointer to Node template or NULL
     */
    void set_head(Node<T>* input_head);

    void set_tail(Node<T>* input_tail);

    /* ||INCREMENT COUNT||
     *
     * BEHAVIOR
     * -increments count by the given integer
     * -if no arguments passed, increments by 1
     *
     * ARGUMENTS
     * -accepts an integer to add to "node count"
     */
    void inc_count();

    void inc_count(int incrmt);

    /* ||DECREMENT COUNT||
     *
     * BEHAVIOR
     * -decrements count by the given integer
     * -if no arguments passed, decrements by 1
     *
     * ARGUMENTS
     * -accepts an integer to subtract from "node count"
     */
    void dec_count();

    void dec_count(int decrmt);

    /* ||PRINT THE LIST||
     *
     * BEHAVIOR
     * -two modes are available to adjust output (see ARGUMENTS)
     *
     * ARGUMENTS
     * -pass 0 to print only node link addresses
     * -pass any regular integer >0 to print adjacent nodes as well
     */
    void print_list(int mode) const;

    /* ||ADD A NODE||
     *
     * BEHAVIOR
     * -inserts the given node into the Nth place in the list according to "index"
     *      (like an array, 0 is first spot)
     * -rearranges neighboring node pointers to accommodate new node
     * -increments the list "node_count"
     *
     * ARGUMENTS
     * -"input_node" must not be NULL or this function does nothing
     * -"index" must be an integer >= 0
     */
    void add_node(int index, Node<T>* input_node);

    /* ||APPEND A NODE||
     *
     * BEHAVIOR
     * -sets the "id" of "input_node" to the current List "node_count"
     * -adds given node to the end of the list, or sets "head"
     *      and "tail" of the empty list to point to the new node
     * -increments the list "node_count"
     *
     * ARGUMENTS
     * -"input_node" must not be NULL or this function does nothing
     */
    void append_node(Node<T>* input_node);

    /* ||DELETE A NODE||
     *
     * BEHAVIOR
     * -if within a list:
     *      ~reorders pointers of adjacent nodes to exclude "input_node"
     *      ~if necessary, reassigns List "head" and/or "tail" pointers
     *      ~deletes "input_node"
     * -if not within a list, does nothing
     *
     * ARGUMENTS
     * -"input_node" must not be NULL or this function does nothing
     */
    void remove_node(Node<T>* input_node);

    /* ||UPDATE A NODE||
     *
     * BEHAVIOR
     * -if within a list:
     *      ~traverses list to node with input index
     *      ~updates data var to the input data value
     * -if list is empty, input index is <0, input index is > list count, or if input data is NULL,
     *      this function does nothing
     *
     * ARGUMENTS
     * -input index must be >= 0, and input data must not be NULL, otherwise this function does nothing
     */
    void update_node(int input_index, T* input_data);

    /* ||REFRESH NODE INDICES||
     *
     * BEHAVIOR
     * -if list is not empty, sets each node to the proper index (sequential order, 0 is first)
     * -if list is empty this function does nothing
     */
    void refresh_nodes();

    /* ||FIND NODE BY ID||
     *
     * BEHAVIOR
     * -traverse the list to find a node by "node_index" field
     *
     * ARGUMENTS
     * -input can be 0 (or NULL) and is not checked for validity
     *
     * RETURN VALUE
     * -NULL if argument is NULL or the node is not found
     * -otherwise returns a pointer to the desired node
     */
    Node<T>* find_node_id(int input_id) const;

    /* ||FIND NODE BY DATA||
     *
     * BEHAVIOR
     * -traverse the list to find a node by "data" field
     * -this function can only operate on certain data types
     *      this includes:
     *      ~integers
     *      -floats
     *      ~characters
     *      ~Boolean
     *      ~C++ string (NOT a C-style string!)
     *
     * ARGUMENTS
     * -accepts a non-NULL pointer to the data to match
     *
     * RETURN VALUE
     * -NULL if the node is not found
     * -otherwise returns a pointer to the first node in the List
     *      with the specified "input_data"
     */
    Node<T>* find_node_data(T* input_data) const;

    /* ||LIST GENERATORS||
     *
     * BEHAVIOR
     * -generates a list "num_nodes" in length of random value of given type
     *
     * ARGUMENTS
     * -integer must be >0 or this function does nothing
     *
     * RETURN VALUE
     * -NULL if passed <= 0 or "false"
     * -pointer to a new List upon success
     */
    static List<T>* gen_list_int(int num_nodes);

    static List<T>* gen_list_float(int num_nodes);

    static List<T>* gen_list_char(int num_nodes);

    static List<T>* gen_list_bool(int num_nodes);

    static List<T>* gen_list_str(int num_nodes);

    static List<T>* gen_list_str(int num_nodes, int str_length);

private:
    long long int list_id;     // -optional, value does not affect list ops
    long long int node_count;  // -negative only upon error
    Node<T>* head;             // -links to first and last nodes
    Node<T>* tail;             //      may be null to indicate empty list
};

// ####################
// ## IMPLEMENTATION ##
// ####################
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
        auto* new_data_int = new int(distribution_int(engine_int));
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
        auto* new_data_float = new float(distribution_float(engine_float));
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
        auto* new_data_char = new char(distribution_char(engine_char));
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
        auto* new_data_bool = new bool(distribution_bool(engine_bool));
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
