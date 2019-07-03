#include <iostream>

using namespace std;

int main() {

    /** INITIALIZATION: */

    int a = 10;     // Assignment Operator
    int b (20);     // Constructor Initialization
    int c {30};     // List Initialization (C++11 onwards) (MOST PREFERRED)


    /** PRIMITIVE DATA-TYPES: **/


    /*********************************
     * CHARACTERS
     ********************************/
    char ch = 'c';
    cout << "Character is: " << ch << endl;


    /*********************************
     * FLOATING POINT NUMBERS
     ********************************/

    float num1 {3.14};          // 7 Decimals
    double num2 {3.14};         // 15 Decimals
    long double num3 {3.14L};   // 19 Decimals

    cout << "Num1 is: " << num1 << "\n" << "Num2 is: " << num2 << "\n" << "Num3 is: " << num3 << endl;


    /*********************************
     * BOOLEAN
     ********************************/

    bool isAlive = true;
    cout << "Alive status: " << isAlive << endl;

    /*********************************
     * OVERFLOW EXAMPLE
     ********************************/

    short val1 {1000};
    short val2 {10000};

    // Cause Runtime Error
    // Because the value will exceed the limit of short
    // And result in an random value printed
    short val3 = val1*val2;

    cout << "Product = " << val3 << endl;

    /// Using {...} List Initialization will report error
    /// And prevent Run Time errors
    /// Hence should be preferred


    /***** L-VALUES (LEFT HAND SIDE VALUES) *****/

    int x = 10;

    // Here x is a L-Value
    // And 10 is a R-Value
    // L-Values are stored in memory and are assigned a R-Values


    /***** R-VALUES (RIGHT HAND SIDE VALUES) *****/

//    100 = x;

    // Here 100 as a Literal L-Value cannot be assigned 10 any R-Value
    // This will cause compiler Error

    return 0;
}