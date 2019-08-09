//
// Created by jaco.ryu on 2019-08-08.
//

#include <iostream>

class Circle {
private:
    int radius;
public:
    Circle() : Circle(0) {} // -> 아래의 Circle(int radius) {  ~~ 호출
    Circle(int radius) {
        this->radius = radius;
    }
};

class Rectangle {
protected:
    int width, height;
public:
    Rectangle(const int width, const int height) : width{width}, height{height} {}
    //Rectangle(const int width, const int height) : width(width), height(height) {} --> this->width = width; this->height = height; 똑같은 것임

    virtual int getWidth() const { return width; }

    virtual void setWidth(const int width) { this->width = width; }

    virtual int getHeight() const { return height; }

    virtual void setHeight(const int height) { this->height = height; }

    int Area() { return width * height; }
};

class Square : public Rectangle {
public:
    // explicit Square(int size) : Rectangle(size, size) {} --> {}의 영역의 코드보다 Rectangle(size, size) 코드를 먼저 실행한다.
    explicit Square(int size) : Rectangle{size, size} {}
    void setWidth(const int width) override { this->width = height = width; }
    void setHeight(const int height) override  { this->height = width = height; }
};

void process(Rectangle &r) {
    int w = r.getWidth();
    r.setHeight(10);
    std::cout << "Expect area = " << (w * 10) << ",got " << r.Area() << std::endl;
}

struct RectangleFactory {
    static Rectangle createRectangle(int w, int h);
    static Square createSqure(int w, int h);
};

int main() {

    Rectangle rectangle{5, 5};
    process(rectangle);

    Square s{5};
    process(s);

    return 0;
}