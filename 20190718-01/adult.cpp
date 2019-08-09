//
// Created by jaco.ryu on 2019-07-18.
//
#include <iostream>
#include "person.cpp"
using namespace std;

class adult : public person {
public:
    adult() {
        this->minAge = 20;
        this->maxAge = 200000;
        this->rate = 0.0;
    }
    double getRate() {
        return this->rate;
    }
};

