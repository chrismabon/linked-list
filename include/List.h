/**
 * @title Linked List
 * @project linked_list
 * @filename List.h
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 * TODO
 * add comments to header
 */

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H

#include "Node.h"

/*
 * TEMPLATE
 * -List
 *
 * TYPES ACCEPTED
 * -integers
 * -characters
 * -floating-point
 * -C++ strings (no NULL-terminated C strings!)
 * -structs, unions, and classes (WARNING: Node class does ->*NOT*<- free dynamically-allocated vars
 *      inside said struct/union/class!)
 */
template<class T>
class List {
public:
    // sets "node_count" to 0, "head" and "tail" to NULL
    List<T>();
    // same as constructor
    virtual ~List<T>();

    int get_count() const;

    void set_count(int input_count);

    // increments "node_count"
    void inc_count();

    // decrements "node_count"
    void dec_count();

    Node<T>* get_head() const;

    void set_head(Node<T>* input_head);

    Node<T>* get_tail() const;

    void set_tail(Node<T>* input_tail);

    /*
     * BEHAVIOR
     * -two modes are available to adjust output (see ARGUMENTS)
     *
     * ARGUMENTS
     * -pass 0 to print only node link addresses
     * -pass any regular integer >0 to print adjacent nodes as well
     */
    void print_list(int mode) const;

    /*
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

    /*
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
    void del_node(Node<T>* input_node);

    /*
     * BEHAVIOR
     * -traverse the list to find a node by "node_index" field
     *
     * ARGUMENTS
     * -input can be 0 (or NULL) and is not checked for validity
     *
     * RETURN VALUES
     * -NULL if argument is NULL or the node is not found
     * -otherwise returns a pointer to the desired node
     */
    Node <T>* find_node_id(int input_id) const;

    /*
     * BEHAVIOR
     * -traverse the list to find a node by "data" field
     * -this function can only operate on certain data types
     *      this includes:
     *      ~integers
     *      ~characters
     *      ~Boolean
     *      ~C++ string (NOT a C-style string!)
     *
     * ARGUMENTS
     * -accepts a non-NULL pointer to the data to match
     *
     * RETURN VALUES
     * -NULL if the node is not found
     * -otherwise returns a pointer to the first node in the List
     *      with the specified "input_data"
     */
    Node <T>* find_node_data(T* input_data) const;

private:
    int node_count; // integer is fine, avoiding long lists
    Node<T>* head;  // links to first and last nodes
    Node<T>* tail;  // may be null to indicate empty list
                    // ("node_count" should be zero if so)
};

#include "../template/List.tpp"

#endif //LINKED_LIST_LIST_H
