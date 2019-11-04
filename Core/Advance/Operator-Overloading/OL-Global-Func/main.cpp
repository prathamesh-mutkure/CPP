#include <iostream>

/****************************************************
 *
 * OPERATOR OVERLOADING USING GLOBAL/FRIEND FUNCTION:
 *
 * UNARY:
 *
 *      return-type operatorOp(const Type &obj);
 *
 * BINARY:
 *
 *      return-type OperatorOp(const Type &lhs, const Type &rhs);
 *
 * NOTE
 * -> The function must be declared as the friend of class
 * -> So that it can access the private data members
 * -> Else we could also use getter methods
 *
 * -> And we cannot use Member Methods together with Global Methods
 * -> And vice versa
 * -> This may confuse the compiler and create problems
 *
 ****************************************************/

using namespace std;

int main() {

    return 0;
}