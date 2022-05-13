#ifndef NODE_HH
#define NODE_HH
#include <iostream>

class Node
{
public:
protected:
    uint priority;
    char message;
    Node *next;
public:
    /**
     * @brief Construct a new Node object
     * 
     * @param priority_ 
     * @param item_ 
     */
    Node(const int & priority_, const char & item_):
        priority(priority_),
        message(item_),
        next(nullptr)
        {}

    /**
     * @brief Construct a new Node object
     * 
     * @param priority_ 
     * @param item_ 
     * @param next_ 
     */
    Node(const int & priority_, const char & item_, Node* next_):
        priority(priority_),
        message(item_),
        next(next_)
        {}

    /**
     * @brief Get the priority of node
     * 
     * @return uint 
     */
    uint get_priority(){return priority;};

    /**
     * @brief Get the message of node
     * 
     * @return char 
     */
    char get_message(){return message;};

    /**
     * @brief Set the next object
     * 
     * @param next_ 
     */
    void set_next(Node* next_){next = next_;};

    /**
     * @brief Get the next object
     * 
     * @return Node* 
     */
    Node* get_next(){return next;};
};

#endif
