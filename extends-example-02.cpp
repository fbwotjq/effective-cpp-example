//
// Created by jaco.ryu on 2019-07-16.
//
#include <iostream>

using namespace std;

class Base {
public:
    virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
    virtual void f() { cout << "Derived::f() called" << endl; }
};

int main() {
    Derived d, *p;
    p = &d;
    p->f();

    Base* baseP;
    baseP = p;
    baseP->f();
    return 0;
}

