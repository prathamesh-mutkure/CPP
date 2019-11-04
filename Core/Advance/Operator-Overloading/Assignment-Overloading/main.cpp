#include <iostream>
#include "Mystring.h"

/**********************************************************
 *
 * OVERLOADING = OPERATOR
 *
 **********************************************************
 *
 * NOTE:
 *
 * Mystring s1 {"Hello"}
 * Mystring s2 {s1}
 *
 * are not Assignment, because they're not initialized
 *
 * s2 = s1
 *
 * is a Assignment because both are initialized
 *
 **********************************************************
 *
 * SYNTAX:
 *
 *      Type &Type::operator=(const Type &rhs);
 *
 **********************************************************
 *
 * Whenever we use = with our Object, the compiler will automatically call
 *
 *      object.operator=()
 *
 * function
 *
 **********************************************************/

using namespace std;

int main() {

    Mystring my1 {"Hello"};
    Mystring my2;
    Mystring my3;

    my3 = my2.operator=(my1);

    my1.display();
    my2.display();
    my3.display();

    return 0;
}

