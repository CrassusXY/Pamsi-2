#ifndef PRIORITYQUE_HH
#define PRIORITYQUE_HH
#include <iostream>
#include "node.hh"

class Priority_queue
{
protected:
    Node *head;
    uint length;
public:
    /**
     * @brief Construct a new Priority_queue object
     * 
     */
    Priority_queue();

    /**
     * @brief 
     * 
     * @return true if queue is empty
     * @return false if queue isn't empty
     */
    bool is_empty();

    /**
     * @brief returns size of queue
     * 
     * @return uint 
     */
    uint size();

    /**
     * @brief removes node with the lowest priority
     * 
     * @return 0 if node was removed successfully
     */
    int pop();


    void pop_all();

    /**
     * @brief adds node depending on priority
     * 
     * @param priority 
     * @param item 
     * @return 0 if operation ended with success
     * @return -1 otherwise
     */
    int push(const uint & priority, const char & item);

    /**
     * @brief prints string from node with the lowest priority
     * 
     */
    void print();
};

#endif