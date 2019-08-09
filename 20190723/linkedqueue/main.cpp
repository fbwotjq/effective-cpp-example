//
// Created by jaco.ryu on 2019-07-23.
//
#include <iostream>
#include "LinkedQueue.h"

using namespace std;

int main() {

    LinkedQueue linkedQueue;
    linkedQueue.enqueue(new Node(1, "FBWOTJQ1", "ECONOMY1"));
    linkedQueue.enqueue(new Node(2, "FBWOTJQ2", "DEVELOP1"));
    linkedQueue.enqueue(new Node(3, "FBWOTJQ3", "DEVELOP2"));
    linkedQueue.enqueue(new Node(4, "FBWOTJQ4", "ECONOMY2"));

    cout << "=========================================" << endl;

    linkedQueue.display();

    cout << "=========================================" << endl;

    delete linkedQueue.dequeue();

    linkedQueue.display();

    cout << "=========================================" << endl;

    return 0;
}