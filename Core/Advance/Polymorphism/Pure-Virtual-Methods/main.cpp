#include <iostream>
#include <vector>

/*************************************************************
 *
 * PURE VIRTUAL FUNCTIONS:
 * -> We can create a abstract class by declaring at least one function as purely virtual
 *
 * SYNTAX :
 *
 *      virtual type name() = 0;
 *
 * -> Now the class containing such functions becomes abstract
 * -> We can no longer instantiate objects from it
 * -> But it can be Inherited
 *
 * -> All the pure virtual functions need to be override in Derived class
 * -> Otherwise the derived class will also be treated as Abstract
 * -> We can then create objects of Derived class
 *
 *************************************************************/

using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
    virtual ~Shape() {};
};

class Square : public Shape {
protected:
    float s;
public:
    explicit Square(float side = 0.0) : s {side} {}

    void area() override {
        cout << "Area of Square = " << s*s << endl;
    }
    void perimeter() override {
        cout << "Perimeter of square = " << 4*s << endl << endl;
    }
    ~Square() override {}
};

class Rectangle : public Shape {
protected:
    float l, b;
public:
    explicit Rectangle(float a = 0.0, float b = 0.0) : l{a}, b{b} {}

    void area() override {
        cout << "Area of Square = " << l*b << endl;
    }
    void perimeter() override {
        cout << "Perimeter of square = " << 2*(l+b) << endl << endl;
    }
    ~Rectangle() override {}
};

class Circle : public Shape {
protected:
    float r;
public:
    explicit Circle(float rad = 0.0) : r {rad} {}
    void area() override {
        cout << "Area of Square = " << 3.14*r*r << endl;
    }
    void perimeter() override {
        cout << "Perimeter of square = " << 6.28 * r << endl << endl;
    }
    ~Circle() override {}
};

int main() {

    Shape *p = nullptr;

    auto *sq = new Square(10);
    auto *rect = new Rectangle(10, 20);
    auto *cir = new Circle(15);

    std::vector<Shape *> vec {sq, rect, cir};

    for (auto *shape : vec) {
        shape->area();
        shape->perimeter();
    }

    delete p;
    delete sq;
    delete rect;
    delete cir;

    return 0;
}