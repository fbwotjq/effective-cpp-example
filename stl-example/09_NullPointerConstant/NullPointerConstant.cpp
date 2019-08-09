#include <iostream>

using namespace std;

class A {

};

void func(char* str) {cout << "char* version" << endl;}
void func(int i) {cout << "int version" << endl;}
void func(A a) {cout << "int version" << endl;}

int main()
{
	func(NULL);
	func(nullptr);

	return 0;
}
