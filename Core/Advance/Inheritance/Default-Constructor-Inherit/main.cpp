#include <iostream>

using namespace std;

/************************************************************************
 *
 * ORDER OF CALL:
 * First the base class constructor is called and then derived class
 * And the destructors are called in reverse order of constructors
 *
 * PASSING ARGUMENTS TO BASE CLASS CONSTRUCTOR:
 *
 *      Derived(parameters) : Base(parameters) {
 *          // Body
 *      }
 *
 * WHICH METHODS ARE NOT INHERITED:
 * -> Base class Constructor
 * -> Base class Destructor
 * -> Friend Functions
 * -> Overloaded Operators
 *
 * But we can explicitly invoke them from derived class
 *
 ************************************************************************/

class A {
protected:
    int a;
public:
    A() {
        cout << "A constructor called!" << endl;
    }
    A(int a) {
        this->a = a;
        cout << "A parameterized constructor called!" << endl;
    }
    ~A() {
        cout << "A destructor called!" << endl;
    }
};

class B : public A {
protected:
    int b;
public:
    B() {
        cout << "B constructor called!" << endl;
    }
    B(int a, int b) : A(a) {
        this->b = b;
        cout << "B parameterized constructor called!" << endl;
    }
    ~B() {
        cout << "B destructor called!" << endl;
    }
};


int main() {

    {
        B b(10, 20);
    }

    return 0;
}