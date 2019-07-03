/**
 * FUNCTION OVERLOADING:
 * Instead of using default arguments, we can do Function Overloading
 * Function Overloading can be achieved by declaring multiple functions of same name
 * But different Parameters
 * But with same return type
 *
 * LIMITATIONS:
 * We cannot overload functions with same arguments but different Return Type
 * Because the compiler will get confused and produce error
 *
 * Declaring Default Arguments again becomes difficult
 * As the compiler may get confuse and produce an error
 *
 */

#include <iostream>

using namespace std;

void calc_area(float, float);   // Area of Rectangle
void calc_area(float);          // Area of Square

int main() {

    calc_area(5, 12);
    calc_area(5);

    return 0;
}

void calc_area(float l, float b) {
    cout << "\nArea of Rectangle: " << (l*b) << endl;
}

void calc_area(float s) {
    cout << "\nArea of Square: " << (s*s) << endl;
}