//
// Created by jaco.ryu on 2019-07-20.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    cout << "5개의 정수를 입력하세요 >> ";
    for(int i = 0 ; i < 5 ; i++ ) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it;

    for(it = v.begin() ; it != v.end() ; it++) {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}