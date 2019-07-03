/**************************************************
 *
 * POINTERS:
 * Pointers are variables which points towards other Variables
 * Pointers store address of other variables
 *
 * All  Pointer variable have same size, because they all store just addresses
 * But all addresses may point to values of different size]
 *
 * Always initialize pointer variables to {nullptr}
 * So as to prevent garbage values from getting initialized
 *
 * NOTE:
 * We cannot set pointers to point to a value of different datatype than itself
 *
 **************************************************/

#include <iostream>

using namespace std;

int main() {

    /************* Basic Examples ************/

    int num = 10;

    cout << "\nThe value of Num is: " << num << endl;
    cout << "The Size of Num is: " << sizeof num << endl;
    cout << "The Address of Num is: " << &num << endl;

    int *pNum = nullptr;    // Set address to NULL, this will init *pNum to 0
    pNum = &num;

    cout << "\nThe value of pNum is: " << pNum << endl;
    cout << "The value pointed by pNum is: " << *pNum << endl;
    cout << "The Size of pNum is: " << sizeof pNum << endl;
    cout << "The Size of value pointed by pNum is: " << sizeof(*pNum) << endl;
    cout << "The Address of pNum is: " << &pNum << endl;

    return 0;
}