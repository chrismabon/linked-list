/**
 * @title Linked List
 * @project linked_list
 * @github https://github.com/chrismabon/linked_list
 * @author Chris Mabon
 *
 */


#ifndef LINKED_LIST_NODE_HPP
#define LINKED_LIST_NODE_HPP

#include <string>

/* ||NODE CLASS TEMPLATE||
 *
 * TEMPLATE
 * -Node class
 *
 * TYPES ACCEPTED
 * -Boolean
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

    /* ||"VERBATIM" TERTIARY CONSTRUCTOR||
     *
     * BEHAVIOR
     * -verbatim constructor, all fields are assigned via arguments
     * -if data type is a class, struct, or string: only a shallow copy is made (address only)
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
     *      "data" var is NOT freed and "invalid_exception" is thrown
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

#include "../template/Node.tpp"

#endif //LINKED_LIST_NODE_HPP
