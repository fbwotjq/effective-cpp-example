#include<iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) {}
Point::Point(int i, int j) :x(i), y(j) {}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
	return 0;
}