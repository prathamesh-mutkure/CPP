#include <iostream>

int main() {


    /** ARRAYS IN C++ **/

    int arr1[5] {1, 2, 3, 4, 5};    // Initializes to 1,2....,5
    int arr2[5] {0};                // All to 0
    int arr3[5] {1, 2};             // 1, 2 and rest all to Zero
    int arr4[] {1, 2, 5, 13, 76};   // Automatically sets the size

    /**
     * NOTE:
     * Arrays in C++ doesn't has Out of Bound checking
     * The code will compile but cause runtime error to occur
     * And Crash the program
     */

    /** MULTI DIMENSIONAL ARRAYS **/

    int ar[3][3] {0};

    return 0;
}