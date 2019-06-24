#include <iostream>
#include <vector>

using namespace std;

int main() {

    /**
     * VECTORS IN C++
     * Same as ArrayList in Java - Dynamic in size
     * They are an external Template Classes
     * Hence we need to create objects out of them.
     *
     * Part of Standard Library
     * No Out of Bound checking
     * But has powerful functions to play with
     *
     * SYNTAX:
     *
     * std::vector <data-type> name;
     *
     */

    /** VECTOR BASICS*/

    vector <int> test;                                  // Empty vector
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};     // Initializes 5 vowels
    vector <int> nums {10, 20, 100, 69, 77};            // Initializes 5 elements
    vector <int> values (10);                           // Initializes and creates 10 elements to 0
    vector <float> fractions (10, 2.5);                 // Creates 10 elements and init to 2.5


    /** ACCESSING VECTORS */

    test.push_back(10);
    test.push_back(12);
    test.push_back(45);

    cout << "\nArray has " << test.size() << " Elements: \n";
    cout << test.at(0) << "\t" << test.at(1) << "\t" << test.at(2) << endl;
    cout << "\n\n====================================\n\n";

    /**
     * FUNCTIONS:
     * push_back() -----> Add an element at end
     * at(x) -----------> Refer element at position x
     * size() ----------> Number to total element in Vector
     */


    /** MULTI DIMENSIONAL BANK */

    vector <vector<int>> vector_2d;

    vector_2d.push_back(test);
    vector_2d.push_back(nums);

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    return 0;
}