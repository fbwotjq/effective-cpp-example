//
// Created by jaco.ryu on 2019-07-14.
//

#include<iostream>

using namespace std;
class Rect;

class RectManager {
public:
    bool static equals(Rect s, Rect r);
};

class Rect {
    int weight, height;
public:
    Rect(int weight, int height) {
        this->weight = weight;
        this->height = height;
    }
    friend bool RectManager::equals(Rect s, Rect r);
};

bool RectManager::equals(Rect s, Rect r) {
    if(s.weight == r.weight && s.height && r.height) return true;
    else return false;
}

int main() {
    bool status = RectManager::equals(Rect(3,4), Rect(4,5));
    if(status) cout << "equal" << endl;
    else cout << "not equal" << endl;
    return 0;
}