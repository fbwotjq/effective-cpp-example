//
// Created by jaco.ryu on 2019-07-16.
//

#include <iostream>

using namespace std;

class Base {
public:
    void f() {
        cout << "Base::f() called" << endl;
    }
};

class Derived : public Base {
public:
    void f() {
        cout << "Derived::f() called" << endl;
    }
};

int main() {
    Derived d, *pDer;
    pDer = &d;
    pDer->f();

    Base* pBase;
    pBase = &d;
    pBase->f();

    return 0;
}