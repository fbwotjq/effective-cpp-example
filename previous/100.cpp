#include<iostream>
void test(int &a)
{
	a = 200;
}

int main() {
	/*
	int a = 10;
	int* p = &a;
	*p = 200;
	*/
	int a = 10;
	int& p = a;

	p = 200;
	test(a);

	return 0;
}