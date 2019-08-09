//
// Created by jaco.ryu on 2019-07-18.
//

#include <iostream>

using namespace std;

template <class T>
class MyStack {
    int tos;
    T data[100];
public:
    MyStack();
    void push(T element);
    T pop();
};

template <class T>
MyStack<T>::MyStack() {
    tos = -1;
}

template <class T>
void MyStack<T>::push(T element) {
    if(tos == 99)  {
        cout << "stack full";
        return ;
    }
    tos++;
    data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
    T refData;
    if(tos == -1) {
        cout << "stack empty";
        return 0; // 오류표시
    }
    refData = data[tos--];
    return refData;
}