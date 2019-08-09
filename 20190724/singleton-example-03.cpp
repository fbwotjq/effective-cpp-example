//
// Created by jaco.ryu on 2019-07-25.
//

#include <iostream>

using namespace std;

class SingletonClass {
private:
    static SingletonClass* instance;
    int total;
    SingletonClass();
public:
    ~SingletonClass() {}
    staic SingletonClass *getInstace()
    {
        if(instance == nullptr) instance = new SingletonClass();
        return instance;
    }
    void addValue(int value);
    int getTotalValue();
};

SingletonClass* SingletonClass::instance = nullptr;

SingletonClass::SingletonClass() {
    total = 0;
}

void SingletonClass::addValue(int value) {
    total += value;
}

int SingletonClass:getTotalValue() {
    return total;
};

int main() {

    SingletonClass* ins1 = SingletonClass::getInstace();
    SingletonClass* ins2 = SingletonClass::getInstace();
    SingletonClass* ins3 = SingletonClass::getInstace();

    ins1->addValue(10);
    cout << "total => " << ins1->getTotalValue() << endl;
    ins2->addValue(10);
    cout << "total => " << ins2->getTotalValue() << endl;
    ins3->addValue(10);
    cout << "total => " << ins3->getTotalValue() << endl;


    return 0;
}