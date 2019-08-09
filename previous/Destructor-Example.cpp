#include<iostream>

using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	void print() { cout << "반지름 " << radius << " 원 생성" << endl;  }
	double getArea();
};

Circle::Circle() {
	radius = 1;
	print();
}

Circle::Circle(int r) {
	radius = r;
	print();
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {

	Circle donut;
	Circle pizza(30);

	/*
	반지름 1 원 생성
	반지름 30 원 생성
	반지름 30 원 소멸
	반지름 1 원 소멸
	*/
	return 0;
	/*
	 * main() 함수가 종료하면 main() 함수의 스택에 생성된 pizza, donut 객체가 소멸된다.
	 * 객체는 생성의 반대순으로 소멸된다.
	*/
}