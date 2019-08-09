//
// Created by jaco.ryu on 2019-07-14.
//

#include <iostream>
#include "Power.cpp"

using namespace std;

class Power2 : Power {
public:
    Power2(int kick = 1, int punch = 1) {
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    Power2 operator+(Power2 p);
    bool operator==(Power2 p);
    Power2& operator+=(Power2 p);
};

void Power2::show() {
    cout << "kick=" << this->kick << ", " << "punch=" << this->punch << endl;
}

Power2 Power2::operator+(Power2 p) {
    this->kick += p.kick;
    this->punch += p.punch;
    return *this;
}

bool Power2::operator==(Power2 p) {
    return p.punch == this->punch && p.kick == this->kick;
}

Power2& Power2::operator+=(Power2 p) {
    this->kick += p.kick;
    this->punch += p.punch;
    return *this;
}

int main() {
    Power2 a(3,5), b(4,6), c, d;
    d = a+= b;
    d.show();
    c = a + b; // 파워 객체 + 연산 a.show();
    b.show();
    c.show();
    a.show();
    d.show();

    if(a == c) cout << "두 파워가 같다." << endl;
    else cout << "두 파워가 같지 않다." << endl;

    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl; // a와 c는 같은 메모리를 참조 한다.
    cout << &d << endl; // d는 복사된다.


    return 0;
}

