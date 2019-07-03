/**
 * ARRAY-POINTER RELATIONSHIP:
 * Arrays and Pointers are very closely related
 * They can be often Interchangeably used to represent a value
 * Because an array is basically contiguous block of memory
 * Whose first address is stored by the array variable
 *
 * Pointers can similarly be used, by doing some basic Pointer Arithmetic
 *
 */


#include <iostream>

using namespace std;

int main() {

    int scores[] = {75, 80, 85};
    int *pScores = scores;

    /***** ARRAY SUBSCRIPT NOTATION *****/

    cout << "\n--------ARRAY SUBSCRIPT NOTATION---------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;


    /***** POINTER SUBSCRIPT NOTATION *****/

    cout << "\n--------POINTER SUBSCRIPT NOTATION---------" << endl;
    cout << pScores[0] << endl;
    cout << pScores[1] << endl;
    cout << pScores[2] << endl;


    /***** ARRAY OFFSET NOTATION *****/

    cout << "\n--------ARRAY OFFSET NOTATION---------" << endl;
    cout << *(scores) << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;


    /***** POINTER OFFSET NOTATION *****/

    cout << "\n--------POINTER OFFSET NOTATION---------" << endl;
    cout << *(pScores) << endl;
    cout << *(++pScores) << endl;
    cout << *(++pScores) << endl;

    return 0;
}