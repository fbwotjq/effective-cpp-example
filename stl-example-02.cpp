//
// Created by jaco.ryu on 2019-07-19.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> sv;
    string name;

    cout << "이름을 5개 입력하세요" << endl;
    for(int i = 0 ; i < 5 ; i++ ) {
        cout << i+1 << ">>";
        getline(cin, name);
        sv.push_back(name);
    }
    name = sv.at(0);
    for(int i = 1 ;  i < sv.size() ; i++ ) {
        if(name < sv[i]) name = sv[i];
        //cout << "DEBUG::" << sv[i] << endl;
    }
    cout << "사전에 가장 뒤에 나오는 이름은 " << name << endl;
    return 0;
}