//
// Created by jaco.ryu on 2019-07-23.
//
#include "LinkedStack.h"
#include "../model/Node.h"

LinkedStack::LinkedStack() {
    this->head = nullptr;
    this->tail = nullptr;
}

bool LinkedStack::isEmpty() {
    return this->head == nullptr;
}

void LinkedStack::push(Node *node) {
    if(this->head == nullptr) {
        this->head = node;
        this->tail = node;
    } else {
        this->tail->setLink(node);
        this->tail = node;
    }
}

Node* LinkedStack::pop() {
    Node *poped = this->head;
    this->head = this->head->getLink();
    return poped;
}

void LinkedStack::display() {
    for(Node *begin = this->head ; begin != nullptr ; begin = begin->getLink()) {
        begin->display();
    }
}