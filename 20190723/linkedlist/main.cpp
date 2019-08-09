//
// Created by jaco.ryu on 2019-07-23.
//
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList linkedList;
    linkedList.push(new Node(1, "FBWOTJQ1", "ECONOMY1"));
    linkedList.push(new Node(2, "FBWOTJQ2", "DEVELOP1"));
    linkedList.push(new Node(3, "FBWOTJQ3", "DEVELOP2"));
    linkedList.push(new Node(4, "FBWOTJQ4", "ECONOMY2"));

    cout << "=========================================" << endl;

    linkedList.display();

    cout << "=========================================" << endl;

    Node* node = linkedList.pop();
    node->display();

    cout << "=========================================" << endl;

    linkedList.display();

    return 0;
}

