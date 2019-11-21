#include <iostream>

/********************************************************
 *
 * INTERFACES:
 * -> It is an Abstract class with only pure virtual functions
 * -> Provided as public
 * -> It must be inherited and the derived class must implement all its methods
 * -> It is used to provide a service/Functionality
 *
 ********************************************************/

using namespace std;

class I_Printable {
    friend ostream &operator<<(ostream &os, I_Printable &obj);
public:
    virtual void print(ostream &os) = 0;
};

ostream &operator<<(ostream &os, I_Printable &obj) {
    obj.print(os);
    return os;
}

class Shape : public I_Printable {
public:
    virtual ~Shape() {};
};

class Square : public Shape {
public:
    void print(ostream &os) override {
        os << "Hello, I am square" << endl;
    }

    ~Square() override {}
};

class Rectangle : public Shape {
public:
    void print(ostream &os) override {
        os << "Hello, I am Rectangle" << endl;
    }

    ~Rectangle() override {}
};

class Circle : public Shape {
public:
    void print(ostream &os) override {
        os << "Hello, I am Circle" << endl;
    }

    ~Circle() override {}
};

int main() {

    Square square;
    Rectangle rectangle;
    Circle circle;

    cout  << square;
    cout  << rectangle;
    cout  << circle;

    return 0;
}