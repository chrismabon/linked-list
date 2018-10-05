/**
 * @title Linked List
 * @project linked_list
 * @filename Node.h
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 * TODO
 *
 */

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

/*
 * TEMPLATE
 * -Node
 *
 * TYPES ACCEPTED
 * -integers
 * -characters
 * -floating-point
 * -C++ strings (no NULL-terminated C strings!)
 * -structs, unions, and classes (WARNING: List class does ->*NOT*<- free dynamically-allocated vars
 *      inside struct/union/class nodes!)
 */
template<class T>
class Node {
public:
    /*
     * BEHAVIOR
     * -allocates space for the "data" variable
     * -all other fields set to 0 (NULL for "next" and "prev" links)
     */
    Node<T>();

    /*
     * BEHAVIOR
     * -copy constructor 0 (verbatim)
     * -copies all arguments
     * -if data type is a class, struct, or string: only the address is copied for the "data" variable
     *
     * ARGUMENTS
     * -node index, pointer to data, pointer to prev node, and pointer to next node in list
     */
    Node<T>(int input_index, T* input_data, Node<T>* input_prev, Node<T>* input_next);

    /*
     * BEHAVIOR
     * -copy constructor 1 (referential)
     * -copies everything from get() calls to the given node
     *
     * ARGUMENTS
     * -pointer to a Node<T>
     */
    explicit Node<T>(Node<T>* input_node);

    /*
     * BEHAVIOR
     * -"data" var memory is freed
     * -(WARNING) dynamically-allocated vars within structs, unions, and classes
     *      are ->*NOT*<- freed because type_id() cannot tell them apart and member
     *      vars are not known beforehand
     * -all other fields set to 0 (NULL for "next" and "prev" links)
     * -if data type is somehow an array or pointer,
     *      "data" var is NOT freed and "invalid_exception" is thrown
     */
    virtual ~Node<T>();

    /*
     * BEHAVIOR
     * -naively returns "node_index"
     */
    int get_index() const;

    /*
     * BEHAVIOR
     * -naively returns pointers to "data", "next" and "prev" members
     */
    T* get_data() const;

    Node<T>* get_next() const;

    Node<T>* get_prev() const;

    /*
     * BEHAVIOR
     * -if passed an integer >= 0, sets "node_index" to input var
     *
     * ARGUMENTS
     * -standard integer type, must be positive or zero
     */
    void set_index(int input_index);

    /*
     * BEHAVIOR
     * -if input var != NULL, assigns input var to "data" var
     *      with respect to template data type
     *
     * ARGUMENTS
     * -pointer to input data var
     */
    void set_data(T* input_data);

    /*
     * BEHAVIOR
     * -if input pointer != NULL, assigns pointer input to "next" or "prev" link
     *
     * ARGUMENTS
     * -pointer to next or prev node
     */
    void set_next(Node<T>* next_ptr);

    void set_prev(Node<T>* prev_ptr);

    /*
     * BEHAVIOR
     * -two modes are available to adjust output (see ARGUMENTS)
     *
     * ARGUMENTS
     * -pass 0 to print only node link addresses
     * -pass any standard integer >0 to print adjacent nodes as well
     */
    void print_node(int mode) const;

private:
    int node_index; // assigned upon addition to the list
    T* data;        // pointer to allow classes/structs
    Node<T>* next;  // links to subsequent and preceding nodes
    Node<T>* prev;  // (may be NULL to indicate the absence of one or both neighbors)
};

#include "../template/Node.tpp"

#endif //LINKED_LIST_NODE_H
