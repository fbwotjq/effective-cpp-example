//
// Created by jaco.ryu on 2019-07-18.
//
#include <iostream>
#include "person.cpp"
using namespace std;

class teanAger : public person {
public:
    teanAger() {
        this->minAge = 10;
        this->maxAge = 19;
        this->rate = 0.50;
    }
    double getRate() {
        return this->rate;
    }
};

