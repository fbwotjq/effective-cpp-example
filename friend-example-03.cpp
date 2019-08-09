//
// Created by jaco.ryu on 2019-07-14.
//

#include<iostream>

using namespace std;

class Rect;

class RectManager {
public:
    bool equals(Rect s, Rect r);
    void copy(Rect &dest, Rect &src);
};

class Rect {
    int weight, height;
public:
    Rect(int weight, int height) {
        this->weight = weight;
        this->height = height;
    }
    friend RectManager;
};

bool RectManager::equals(Rect s, Rect r) {
    return s.weight == r.weight && s.height == r.height;
}

void RectManager::copy(Rect &dest, Rect &src) {
    dest.weight = src.weight;
    dest.height = src.height;
}



int main() {
    Rect a(3,4), b(5,6);
    RectManager man;

    man.copy(b, a); // a를 b에 복사한다.

    if(man.equals(a, b)) cout << "equal" << endl;
    else cout << "not equal" << endl;

    return 0;
}

