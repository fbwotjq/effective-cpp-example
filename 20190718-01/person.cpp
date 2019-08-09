//
// Created by jaco.ryu on 2019-07-18.
//

#include <iostream>
#include <string>

#ifndef PERSON_INCLUDE
#define PERSON_INCLUDE
class person {
protected:
    double rate;
    int minAge;
    int maxAge;
public:
    virtual double getRate() { return 0; };
};
#endif // !ADDER_USE