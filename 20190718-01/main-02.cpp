//
// Created by jaco.ryu on 2019-07-18.
// iterator begin and

#include <iostream>
#include <vector>

#include "person.cpp"
#include "child.cpp"
#include "teanAger.cpp"
#include "adult.cpp"

using namespace std;

int fee = 3000;

double calcPay(vector<person*> *obj) {

    double sum = 0;

    vector<person*>::iterator it = obj->begin();
    for( ; it != obj->end() ; it++ ) {
        person* p = *it;
        double rate = p->getRate();
        double finalFee = fee - p->getRate() * fee;
        //cout << "rate : " << rate << " finalFee: "<< finalFee << endl;
        sum += finalFee;
    }

    return sum;

}

int main() {

    vector<person*> *persons = new vector<person*>();

    persons->push_back(new adult());
    persons->push_back(new teanAger());
    persons->push_back(new teanAger());
    persons->push_back(new child());

    double sum = calcPay(persons);
    cout << "총 비용은 " << sum << "입니다." << endl;
    delete persons;

    return 0;

}