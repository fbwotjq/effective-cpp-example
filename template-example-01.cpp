//
// Created by jaco.ryu on 2019-07-17.
//

#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radiu = 1) { this->radius = radius; }
    int getRadius() { return this->radius; }
};

template <class T>
void mySwap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {

    int a = 4, b = 5;
    mySwap(a, b);
    cout << "INT :: a=" << a << ", b=" << b << endl;

    double c = 0.3, d = 1.8;
    mySwap(c, d);
    cout << "DOUBLE :: c=" << c << ", d=" << d << endl;

    Circle e(12), f(15);
    mySwap(e, f);
    cout << "Circle :: e=" << e.getRadius() << ", f=" << f.getRadius() << endl;

    return 0;

}