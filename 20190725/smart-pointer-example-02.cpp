//
// Created by jaco.ryu on 2019-07-25.
//

#include <iostream>
#include <memory>
#include <string>

using namespace std;

template <class T> class smartPointer {
private:
    T *p;
public:
    smartPointer(T *sp): p(sp) {}
    ~smartPointer() { delete p; }
    T operator*() { return *p; }
    T* operator->() const { return p; }
};

int main() {
    smartPointer<string> pStr(new string("test"));
    cout << pStr.operator*() << endl;
    cout << *pStr << endl;
    cout << pStr->size() << endl;
    return 0;
}