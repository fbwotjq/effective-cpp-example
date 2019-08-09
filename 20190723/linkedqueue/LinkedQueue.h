//
// Created by jaco.ryu on 2019-07-23.
//

#include "../model/Node.h"

#ifndef EFFECTIVE_CPP_EXAMPLE_LINKEDQUEUE_H
#define EFFECTIVE_CPP_EXAMPLE_LINKEDQUEUE_H

class LinkedQueue {
    Node *front;
    Node *rear;
public:
    LinkedQueue();
    bool isEmpty();
    void enqueue(Node *node);
    Node* dequeue();
    void display();
};

#endif //EFFECTIVE_CPP_EXAMPLE_LINKEDQUEUE_H
