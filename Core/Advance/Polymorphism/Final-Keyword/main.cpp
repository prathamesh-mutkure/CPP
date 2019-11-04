#include <iostream>

using namespace std;

/*********************************************************
 *
 * FINAL KEYWORD WITH CLASS:
 * -> We can define a class as final
 * -> To prevent it from getting subclassed
 *
 * SYNTAX:
 *
 *      class name final {
 *          // Members
 *      }
 *
 * FINAL METHODS:
 * -> We can also define a method as final to prevent it from getting overriden
 *
 * SYNTAX:
 *
 *      return-type name(parameters) final {
 *          // Body
 *      }
 *
 *********************************************************/

class Base final {
public:
    void display() {
        cout << "Hii, I'm Base Class Object" << endl;
    }
};

// Cannot inherit Base

class Derived /* : public Base */ {
public:
    virtual void display() final {
        cout << "Hii, I'm Derived Class Object" << endl;
    }
};

// Cannot override final function display()

class Derived2 : public Derived {
public:
//    void display() {
//        cout << "Hii, I'm Derived2 Class Object" << endl;
//    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}