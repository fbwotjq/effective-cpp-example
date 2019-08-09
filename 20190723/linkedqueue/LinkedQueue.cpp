//
// Created by jaco.ryu on 2019-07-23.
//
#include "LinkedQueue.h"

LinkedQueue::LinkedQueue() {
    this->front = nullptr;
    this->rear = nullptr;
};

bool LinkedQueue::isEmpty() {
    return this->front == nullptr;
}

void LinkedQueue::enqueue(Node *node) {

    if(this->front == nullptr) this->front = node;
    else this->rear->setLink(node);

    this->rear = node;

}

Node* LinkedQueue::dequeue() {
    Node *returnNode = this->front;
    this->front = this->front->getLink();
    return returnNode;
}

void LinkedQueue::display() {
    for(Node *begin = this->front ; begin != nullptr ; begin = begin->getLink()) {
        begin->display();
    }
}