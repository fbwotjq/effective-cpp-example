//
// Created by jaco.ryu on 2019-07-25.
//

#include <iostream>

using namespace std;

class DynamicSingletonClass
{
private:
    static DynamicSingletonClass* instance;
    DynamicSingletonClass() {}

public:
    ~DynamicSingletonClass() {
        cout << "CALL ~DynamicSingletonClass" << endl;
    }
    static DynamicSingletonClass *getInstance()
    {
        if(instance == nullptr) instance = new DynamicSingletonClass();

        return instance;
    }
    void showMessage() {
        cout << "Dynamic Singleton Pattern" << endl;
    }
};

DynamicSingletonClass* DynamicSingletonClass::instance = nullptr;

int main() {
    DynamicSingletonClass *p = DynamicSingletonClass::getInstance();
    p->showMessage();
    delete p;
    return 0;
}