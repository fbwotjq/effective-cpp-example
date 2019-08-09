//
// Created by jaco.ryu on 2019-07-19.
//

#include <iostream>

using namespace std;

template <class T1, class T2>
class GClass {
    T1 data1;
    T2 data2;
public:
    GClass();
    void set(T1 a, T2 b);
    void get(T1 &a, T2 &b);
};

template <class T1, class T2>
GClass<T1,T2>::GClass() {
    data1 = 0;
    data2 = 0;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1 &a, T2 &b) {
    a = this->data1;
    b = this->data2;
}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    this->data1 = a;
    this->data2 = b;
}

int main() {

    int a;
    double b;
    GClass<int, double> x;

    x.set(2, 0.5);
    x.get(a, b);

    cout << "a=" << a << '\t' << "b=" << b << endl;

    char c;
    float d;
    GClass<char, float> y;

    y.set('x', 234.34);
    y.get(c, d);

    cout << "c=" << c << '\t' << "d=" << d << endl;

    return 0;
}