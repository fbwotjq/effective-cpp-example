//
// Created by jaco.ryu on 2019-07-18.
//

#include "MyStack.cpp"

int main() {

    MyStack<int> iStack;
    iStack.push(3);
    cout << iStack.pop() << endl;

    MyStack<double> dStack;
    dStack.push(3.5);
    cout << dStack.pop() << endl;

    MyStack<char> *p = new MyStack<char>();
    p->push('a');
    cout << p->pop() << endl;
    delete p;

    return 0;
}