//
// Created by jaco.ryu on 2019-07-18.
//

#include <iostream>
#include "person.cpp"
using namespace std;

class child : public person {
public:
    child() {
        this->minAge = 0;
        this->maxAge = 9;
        this->rate = 0.80;
    }
    double getRate() {
        return this->rate;
    }
};
