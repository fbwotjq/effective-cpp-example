//
// Created by jaco.ryu on 2019-07-16.
//

#include <iostream>

using namespace std;

class Calculator {
public:
    virtual int add(int a, int b) = 0;
    virtual int subtract(int a, int b) = 0;
    virtual double average(int a[], int size = 0) = 0;
};

class GoodeCalculator : public Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    double average(int a [], int size) {
        double sum = 0; for(int i=0; i<size; i++)
            sum += a[i]; return sum/size;
    }
};

int main() {
    int a[] = {1,2,3,4,5};
    Calculator *p = new GoodeCalculator();
    cout << p->add(2, 3) << endl;
    cout << p->subtract(2, 3) << endl;
    cout << p->average(a, 5) << endl;
    delete p;
    return 0;
}