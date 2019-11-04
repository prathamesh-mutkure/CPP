#include <iostream>
#include "Mystring.h"

/*************************************************************
 *
 * OVERLOADING FUNCTION AS MEMBER FUNCTION:
 *
 * UNARY OPERATOR OVERLOADING:
 *
 *      Type operatorOp();
 *
 * BINARY OPERATOR OVERLOADING:
 *
 *      Type operatorOp(Type &rhs);
 *
 *************************************************************
 *
 * PRE-INCREMENT:
 *
 *      Type operatorOp();
 *
 * POST-INCREMENT:
 *
 *      Type operatorOp(Type &rhs);
 *
 *************************************************************/

using namespace std;

int main() {

    cout << boolalpha << endl;

    Mystring m1 {"HELLO"};
    Mystring m2 {"WORLD!"};
    Mystring m3;
    Mystring m4;

    m3 = m1 + " " + m2;       // "HELLO WORLD!"
    m4 = -m1;           // "hello"

    cout << "Equal = " << (m1 == m2) << endl;

    m1.display();
    m2.display();
    m3.display();
    m4.display();

    Mystring m5;
    Mystring m6;

    m5 = m1 + " there!";

    // m6 = "Hello " + m2;      // ILLEGAL
    // Because Hello is not a Mystring object

    m6 = m1 + " " + m2 + " C++";
    // Valid because we have a compiler for constructing an object of Mystring
    // from a String


    return 0;
}