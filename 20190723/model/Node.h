//
// Created by jaco.ryu on 2019-07-23.
//
#include "Student.h"

#ifndef EXAMPLE_20190723_LINKEDLIST_NODE_H
#define EXAMPLE_20190723_LINKEDLIST_NODE_H

class Node : public Student {
    Node *link;
public:
    Node(int i = 0, const char *name = "", const char *dept = "") : Student(i , name, dept) {
        this->link = nullptr;
    }
    Node* getLink();
    void setLink(Node *next);
    ~Node(void) {}
};

#endif //EXAMPLE_20190723_LINKEDLIST_NODE_H
