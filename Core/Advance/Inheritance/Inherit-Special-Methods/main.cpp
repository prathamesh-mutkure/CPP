#include <iostream>

using namespace std;

/************************************************************
 *
 * SPECIAL FUNCTION INHERITANCE:
 * -> Functions like Copy constructor and overloaded operators aren't inherited
 * -> But can be called explicitly from Base class
 *
 * -> We just need to pass the derived class object to function
 * -> Then the compiler SLICE the derived class object to Base class object
 *
 **************************************************************/

class Base {
protected:
    int value;
public:
    Base() : value{0} {
        cout << "Base no-args constructor" << endl;
    }
    Base(int value) : value {value} {
        cout << "Base(int) constructor" << endl;
    }
    ~Base() {
        cout << "Base Destructor!" << endl;
    }

    /* COPY CONSTRUCTOR */
    Base(const Base &rhs) : value {rhs.value} {
        cout << "Base copy constructor" << endl;
    }

    /* ASSIGNMENT OVERLOADING */
    Base &operator=(const Base &rhs) {
        cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;

        value = rhs.value;
        return *this;
    }
};

class Derived : public Base {
protected:
    int double_val;
public:
    Derived() : double_val {0} {
        cout << "Derived no-args constructor" << endl;
    }
    Derived(int dob_value) : Base(dob_value), double_val {dob_value*2} {
        cout << "Derived(int) constructor" << endl;
    }
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }

    /* COPY CONSTRUCTOR */
    Derived(const Derived &rhs) : Base {rhs}, double_val {rhs.double_val} {
        cout << "Derived copy constructor" << endl;
    }

    /* ASSIGNMENT OVERLOADING */
    Derived &operator=(const Derived &rhs) {
        cout << "Derived operator=" << endl;

        if (this == &rhs)
            return *this;

        Base::operator=(rhs);
        double_val = rhs.double_val;
        return *this;
    }
};

int main() {

//    Base b {100};
//    Base b1 {b};
//    b = b1;

    Derived d {10};
    Derived d1 {d};
    d = d1;

    return 0;
}