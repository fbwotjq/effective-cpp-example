//
// Created by jaco.ryu on 2019-07-18.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for( int i = 0 ; i < v.size() ; i++ ) cout << v[i] << " ";

    cout << endl;

    return 0;
}