/**
 * RECURSION:
 * Recursion is when, a Function calls itself over and over either directly or indirectly
 * Anything that can be done Recursively can also be done iteratively anf Vice Versa
 *
 * Recursion can only be performed where it makes sense
 * Other times, Loops are better solution
 *
 * Because Recursion is Resource Hungry
 * And can result in Stack Overflow Error
 *
 */

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

int main() {

    int num = 10;
    cout << endl << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

unsigned long long factorial(unsigned long long n){
    if (n <= 1)
        return 1;   // Base Case
    return n * factorial(n-1);
}