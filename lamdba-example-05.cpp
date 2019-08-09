//
// Created by jaco.ryu on 2019-07-20.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = { 1,2,3,4,5 };
    for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
    return 0;
}