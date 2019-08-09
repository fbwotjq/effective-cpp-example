//
// Created by jaco.ryu on 2019-07-23.
//
#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
}

bool LinkedList::isEmpty() {
    return this->head == nullptr;
}

void LinkedList::display() {
    for(Node *begin = this->head ; begin != nullptr ; begin = begin->getLink()) {
        begin->display();
    }
}

Node* LinkedList::pop() {
    Node *poped = this->head;
    this->head = this->head->getLink();
    return poped;
}

void LinkedList::push(Node *node) {
    node->setLink(this->head);
    this->head = node;
}



