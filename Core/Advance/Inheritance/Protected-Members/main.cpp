#include <iostream>

using namespace std;

/***************************************************
 *
 * PROTECTED ACCESS MODIFIER:
 * -> Accessible to the class
 * -> Accessible to the derived class
 * -> Not accessible to outside world
 *
 * -> Behave same as private members without inheritance
 *
 * INHERITANCE TYPE:
 *
 * 1. PUBLIC INHERITANCE
 *
 *      public --------> public
 *      protected -----> protected
 *      private -------> no access
 *
 * 2. PROTECTED INHERITANCE
 *
 *      public --------> protected
 *      protected -----> protected
 *      private -------> no access
 *
 * 3. PRIVATE INHERITANCE
 *
 *      public --------> private
 *      protected -----> private
 *      private -------> no access
 *
 * NOTE
 * -> Friends of function have access to all types of members
 *
 ***************************************************/

class Base {
public:
    int a;
protected:
    int b;
private:
    int c;

    // a is public
    // b is protected
    // c is private
};

class D1 : public Base {
    // a is public
    // b is protected
    // c is not accessible
};

class D2 : protected Base {
    // a is protected
    // b is protected
    // c is not accessible
};

class D3 : private Base {
    // a is private
    // b is private
    // c is not accessible
};

int main() {

    Base base;
    D1 d1;
    D2 d2;
    D3 d3;

    d1.a = 10;      // OK
    //d1.b = 20;    // Error - Protected
    //d1.c = 30;    // Error - Not accessible

    //d2.a = 10;    // Error - Protected
    //d2.b = 10;    // Error - Protected
    //d2.c = 10;    // Error - Not accessible

    //d3.a = 10;    // Error - Private
    //d3.b = 10;    // Error - Private
    //d3.c = 10;    // Error - Not accessible

    return 0;
}