//
// Created by jaco.ryu on 2019-07-18.
//

#include <iostream>
#include <string>
#include "MyStack.cpp"

using namespace std;

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
    void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

int main() {
    return 0;
}