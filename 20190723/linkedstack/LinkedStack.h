//
// Created by jaco.ryu on 2019-07-23.
//

#include "../model/Node.h"

#ifndef EFFECTIVE_CPP_EXAMPLE_LINKEDSTACH_H
#define EFFECTIVE_CPP_EXAMPLE_LINKEDSTACH_H

class LinkedStack {
    Node *head;
    Node *tail;
public:
    LinkedStack();
    bool isEmpty();
    void push(Node *node);
    Node* pop();
    void display();
};

#endif //EFFECTIVE_CPP_EXAMPLE_LINKEDSTACH_H
