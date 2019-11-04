#include <iostream>
#include "Mystring.h"

/*************************************************************
 *
 * OVERLOADING <</>> OPERATOR:
 *
 * -> We can overload <</>> operators using Global Functions
 * -> We cannot use member functions, because then
 * -> we'll have to first use the Object then stream class like:
 *
 *      object << cout;
 *      object.opertator<<(cout);
 *
 * -> We can overcome that by using Friend Function
 *
 * SYNTAX:
 *
 *      returnType operatorOp(stream-class &stream, Type &object);
 *
 *************************************************************/

using namespace std;

int main() {

    Mystring m1 {"Hello World!"};
    Mystring mystring;

    cout << endl << m1 << endl;

    cin >> mystring;

    cout << mystring << endl;

    return 0;
}