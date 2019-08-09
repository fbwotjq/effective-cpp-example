//
// Created by jaco.ryu on 2019-07-23.
//
#include <iostream>
#include "LinkedStack.h"

using namespace std;

int main() {

    LinkedStack linkedStack;
    linkedStack.push(new Node(1, "FBWOTJQ1", "ECONOMY1"));
    linkedStack.push(new Node(2, "FBWOTJQ2", "DEVELOP1"));
    linkedStack.push(new Node(3, "FBWOTJQ3", "DEVELOP2"));
    linkedStack.push(new Node(4, "FBWOTJQ4", "ECONOMY2"));

    cout << "=========================================" << endl;

    linkedStack.display();

    cout << "=========================================" << endl;

    Node* node = linkedStack.pop();
    node->display();

    cout << "=========================================" << endl;

    linkedStack.display();

    return 0;
}

