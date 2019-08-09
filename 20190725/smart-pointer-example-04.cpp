//
// Created by jaco.ryu on 2019-07-25.
//

#include <iostream>
#include <memory>

using namespace std;

void DoSomething() {
    cout << "start!!" << endl;
    auto_ptr<int> ptr_a1 = auto_ptr<int>(new int(10));
    //auto_ptr<int> ptr_a2 = ptr_a1;
    //auto_ptr<int> ptr_a3 = ptr_a2;

    cout << *ptr_a1 << endl;

    shared_ptr<int> ptr_s1 = shared_ptr<int>(new int(50));
    shared_ptr<int> ptr_s2 = ptr_s1;
    shared_ptr<int> ptr_s3 = ptr_s2;

    int *ptr_1 = new int(100);
    int *ptr_2 = ptr_1;
    int *ptr_3 = ptr_2;

    //cout << "ptr_a =>" << *ptr_a1 << ',' << *ptr_a2 << ',' << *ptr_a3 << endl;
    cout << "ptr_s =>" << *ptr_s1 << ',' << *ptr_s2 << ',' << *ptr_s3 << endl;
    cout << "ptr =>" << *ptr_1 << ',' << *ptr_2 << ',' << *ptr_3 << endl;

    delete ptr_1;

    auto_ptr<int> ptr_a2 = ptr_a1;
    cout << "ptr_a2 : " << *ptr_a2 << endl;
    cout << *ptr_a1 << endl;

    //auto_ptr<int> ptr_a3 = ptr_a2;

}

int main() {
    DoSomething();
    return 0;
}