/**********************************************
 * POINTER ARITHMETIC:
 * We can perform usual Arithmetic operators on pointers
 * But some work differently than on normal variable
 *
 **********************************************/

#include <iostream>

using namespace std;

int main() {

    cout << boolalpha;

    /***** INCREMENTATION/DECREMENTATION *****/

    int a {10}, b {20};
    int *pA = &a, *pB = &b;

    cout << "\nSum = " << *pA + (*pB) << endl << endl;


    /***** COMPARISON *****/

    /* The equality operator checks two pointers point to same Address
     * Does not compare their values*/
    int num1, num2;
    int *p1 = &num1, *p2 = &num2, *p3 = &num1;

    cout << (p1 == p2) << endl;
    cout << (p1 == p3) << endl << endl;


    /***** ARRAY ITERATION *****/

    int arr[5] = {3, 4, 6, 7, -1};
    int *pArr = arr;

    while (*pArr != -1)
        cout << *pArr++ << "\t";
    cout << endl;

    /***** INCREMENTATION/DECREMENTATION *****/

    return 0;
}