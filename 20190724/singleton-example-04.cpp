//
// Created by jaco.ryu on 2019-07-25.
//

#include <iostream>
//#include <crtdbg.h>
using namespace std;

class SingletonClass {
private:
    static SingletonClass *instance;
    SingletonClass() {}
    ~SingletonClass() {}

public:
    static SingletonClass *getInstance() {
        if(!instance) instance = new SingletonClass();
        return instance;
    }
    void showMessage() {
        cout << "Singleton Pattern" << endl;
    }
    void destroy() {
        if(instance != nullptr) {
            delete instance;
            instance = nullptr;
            cout << "delete instance" << endl;
        }
    }
};

SingletonClass *SingletonClass::instance = nullptr;

int main() {
    SingletonClass::getInstance()->showMessage();
    SingletonClass::getInstance()->destroy();
    return 0;
}