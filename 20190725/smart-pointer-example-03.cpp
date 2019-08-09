//
// Created by jaco.ryu on 2019-07-25.
//

#include <iostream>
#include <memory>
#include <string>

using namespace std;

void DoSomething() {

    auto_ptr<int> ptr1 = auto_ptr<int>(new int(10));
    shared_ptr<int> ptr2 = shared_ptr<int>(new int(50));

    int *ptr3 = new int(100);

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    delete ptr3;

}

int main() {
    DoSomething();
    return 0;
}