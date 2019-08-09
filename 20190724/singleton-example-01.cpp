//
// Created by jaco.ryu on 2019-07-23.
//
#include <iostream>

using namespace std;

class SingletonClass {
private:
    static SingletonClass instance;
    SingletonClass() {}
    ~SingletonClass() {}
public:
    static SingletonClass& getInstance() {
        return instance;
    }
    void ShowMessage() {
        cout << "Singleton Pattern" << endl;
    }
};

SingletonClass SingletonClass::instance;

int main() {
    SingletonClass::getInstance().ShowMessage();
    return 0;
}