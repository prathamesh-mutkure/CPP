#include <iostream>

using namespace std;

/*****************************************************************************
 *
 * POLYMORPHISM:
 * -> Compile Time
 * -> Run Time
 *
 * STATIC/LATE/COMPILE TIME POLYMORPHISM:
 * -> Function Overloading
 * -> Operator Overloading
 *
 * -> The binding is done at run time
 * -> Thus, more efficient and fast
 *
 * DYNAMIC/LATE/RUN TIME POLYMORPHISM :
 * -> Virtual Functions and
 * -> Base Pointers
 *
 * -> To achieve Dynamic Polymorphism, we need to use Base class Pointer as well as Virtual Functions
 * -> The virtual keyword tells compiler to bind during run time based on the pointed value
 * -> Thus, very powerful
 *
 *****************************************************************************/

class Base {
public:
    void greet() const {
        cout << "Hello, I'm base class!" << endl;
    }
};

class Derived : public Base {
public:
    void greet() const {
        cout << "Hello, I'm derived class!" << endl;
    }
};

void greet(const Base &obj) {
    cout << "Greet : ";
    obj.greet();        // Always binds to Base::greet()
}

int main() {

    Base b;
    Derived d;
    Base *base;

    cout << endl;
    b.greet();          // Base::greet()
    d.greet();          // Derived::greet()

    greet(b);           // Base::greet()
    greet(d);           // Base::greet()

    base = &b;              // Pointer to base
    base->greet();          // Base::greet()

    base = &d;              // Pointer to derived
    base->greet();          // Base::greet()

    return 0;
}