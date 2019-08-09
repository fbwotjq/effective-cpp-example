//
// Created by jaco.ryu on 2019-07-20.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int n) {
    cout << n << " ";
}

int main() {

    vector<int> v = { 1, 2, 3, 4, 5};

    for_each(v.begin(), v.end(), print);

    return 0;
}