#include <iostream>

using namespace std;

/************************************************************
 *
 * OVERRIDE SPECIFIER:
 * -> Sometimes, we may wrongly define the virtual function
 * -> And that may cause the function to be statically bind
 * -> Which will produce run-time errors
 * -> Which are hard to find and debug
 *
 * -> To avoid this we can explicitly specify it as override
 * -> Which will cause compiler time error if used with wrong definition
 *
 * SYNTAX:
 *
 *      virtual return-type name(parameters) override {
 *          // Body
 *      }
 *
 * -> Should always be used
 *
 ************************************************************/

class Base {
public:
    virtual void hello() const {
        cout << "Hello, I'm Base Class" << endl;
    }
};

class Derived : public Base {
public:
    void hello() const override {
        cout << "Hello, I'm Derived Class" << endl;
    }
};

int main() {

    Base *p1 = new Base;
    Base *p2 = new Derived;

    p1->hello();
    p2->hello();

    return 0;
}