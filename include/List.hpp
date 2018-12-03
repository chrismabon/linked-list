/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#ifndef LINKED_LIST_LIST_HPP
#define LINKED_LIST_LIST_HPP

#include "Node.hpp"

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
 * -structs, unions, and classes (WARNING: Node class does ->*NOT*<- free dynamically-allocated vars
 *      inside said struct/union/class!)
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
     * -accepts an integer to add to "node"count"
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
     * -accepts an integer to subtract from "node"count"
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
    Node <T>* find_node_id(int input_id) const;

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
    Node <T>* find_node_data(T* input_data) const;

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

#include "../template/List.tpp"

#endif //LINKED_LIST_LIST_HPP
