//
// Created by jaco.ryu on 2019-07-23.
//

#include "../model/Node.h"

class LinkedList {
    Node *head;
public:
    LinkedList();
    bool isEmpty();
    void push(Node *node);
    Node* pop();
    void display();
};