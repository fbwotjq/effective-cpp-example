#include<iostream>

using namespace std;

class Rectangle {
	int width = 0, height = 0;
public:
	Rectangle();
	Rectangle(int x);
	Rectangle(int x, int y);
	bool isSquare();
};

Rectangle::Rectangle() : width(1), height(1) {}
Rectangle::Rectangle(int x) : width(x), height(x) {}
Rectangle::Rectangle(int x, int y) : width(x), height(y) {}
bool Rectangle::isSquare() {
	return width == height;
}

int main() {

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1?? ?????????." << endl;
	if (rect2.isSquare()) cout << "rect2?? ?????????." << endl;
	if (rect3.isSquare()) cout << "rect3?? ?????????." << endl;

	/*
	rect1?? ?????????.
	rect3?? ?????????.
	*/

	return 0;
}