/**************************
 *
 * CONSTANT POINTERS:
 * To have a better control over Pointers and Data, we can use different types of constant
 * Or to prevent any unintended Data Change
 * There Three kinds of Constant Pointers:
 *
 * 1. POINTER TO CONSTANTS
 * -> The Data cannot be changed through Pointers
 * -> But the Pointer itself can be changed to point somewhere else
 *
 * 2. CONSTANT POINTERS
 * -> The Data can be changed
 * -> But the Address to which it points cannot be changed
 *
 * 3. CONSTANTS POINTERS TO CONSTANTS
 * -> Neither the Data nor the Address can be changes
 * -> Everything Constant
 *
 *
 **************************/

#include <iostream>

using namespace std;

int main() {


    /***** POINTER TO CONSTANTS *****/

    /* We can assign new address to Pointer
     * But not change the pointed Value
     * However, the value of the variable can be changed by directly accessing them */

    int a {10};
    int b {20};

    const int *pNum = &a;

    // *pNum = 100; ERROR

    pNum = &b;      // Legal


    /***** CONSTANT POINTERS *****/

    int num {100};

    // Constant Address
    int *const ptrNum = &num;

    *ptrNum = 50;       // Legal

     // ptrNum = &a; ILLEGAL


    /***** CONSTANTS POINTERS TO CONSTANTS *****/

    int abc = 60;

    const int *const ptr_abc = &abc;


//    ALL ILLEGAL: COMPLETE CONSTANTS
//    *ptr_abc = 20;
//    ptr_abc = &b;


    return 0;
}