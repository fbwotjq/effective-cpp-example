//
// Created by jaco.ryu on 2019-07-20.
//

#include <iostream>
#include <string>

using namespace std;

int main() {

    // 두개가 똑 같은 것임
    // [](string a, string b)-> void { cout << a << "보다 " << b << "가 좋아" << endl; };
    auto love = [](string a, string b) {
        cout << a << "보다 " << b << "가 좋아" << endl;
    };


    love("돈", "너");
    love("냉면", "너");

    return 0;
}