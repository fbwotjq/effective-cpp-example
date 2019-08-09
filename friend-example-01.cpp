//
// Created by jaco.ryu on 2019-07-14.
//

#include <iostream>

using namespace std;

class Rect;

bool equals(Rect a, Rect b);

class Rect {
    int width, height;
public:
    Rect(int width, int height) {
        this->width = width;
        this->height = height;
    }
    friend bool equals(Rect a, Rect b);
};

bool equals(Rect a, Rect b) {
    if(a.width == b.width && a.height == b.height) return true;
    else return false;
}

int main() {
    Rect a(3, 4), b(4, 5);
    if(equals(a, b)) cout << "equals" << endl;
    else cout << "not equals" << endl;
    return 0;
}