//
// Created by jaco.ryu on 2019-07-20.
//

#include <iostream>

using namespace std;

int main() {

    int sum = 0;
    [&sum](int x, int y) -> void { sum = x + y; }(2,3);

    cout << "합은 " << sum;

    return 0;
}