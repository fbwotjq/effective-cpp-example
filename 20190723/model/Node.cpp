//
// Created by jaco.ryu on 2019-07-23.
//

#include "Student.h"
#include "Node.h"

Node* Node::getLink() {
    return this->link;
}

void Node::setLink(Node *next) {
    this->link = next;
}

