#include<iostream>

using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	void print() { cout << "������ " << radius << " �� ����" << endl;  }
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
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {

	Circle donut;
	Circle pizza(30);

	/*
	������ 1 �� ����
	������ 30 �� ����
	������ 30 �� �Ҹ�
	������ 1 �� �Ҹ�
	*/
	return 0;
	/*
	 * main() �Լ��� �����ϸ� main() �Լ��� ���ÿ� ������ pizza, donut ��ü�� �Ҹ�ȴ�.
	 * ��ü�� ������ �ݴ������ �Ҹ�ȴ�.
	*/
}