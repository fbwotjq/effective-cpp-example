//
// Created by jaco.ryu on 2019-07-25.
//
#include <iostream>
#include <memory>

using namespace std;

int main() {
    auto_ptr<double> rate(new double);
    *rate = 3.234;
    cout << *rate << endl;
    return 0;
}