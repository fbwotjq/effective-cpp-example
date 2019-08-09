//
// Created by jaco.ryu on 2019-07-20.
//

#include <iostream>

using namespace std;

int main() {

    double pi = 3.14;

    auto calc = [pi](int r) -> double { return pi * r * r; };

    cout << "면적은 " << calc(3);

    return 0;
}