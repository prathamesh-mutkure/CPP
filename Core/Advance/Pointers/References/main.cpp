/**
 * REFERENCES:
 * We can use References as Alternative name for an existing variable
 * Like an Alias
 *
 * SYNTAX:
 *      object& reference-name = object-name;
 *
 * References are commonly used in Functions as Pass by Reference
 *
 * References are like Pointers under the hood, but have some limitations
 * Pointers are more powerful than references
 *
 * LIMITATIONS:
 * Cannot be NULL
 * Cannot be re-initialized to other objects
 * Must always be initialized to  something.
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {

    /***** INTEGER REFERENCES *****/

    int num {100};
    int &ref {num};     // ref is a reference to num

    cout << "\nnum = " << num << endl;
    cout << "ref = " << ref << endl;

    num = 200;
    cout << "----------------------------------" << endl;
    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    ref = 300;
    cout << "----------------------------------" << endl;
    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    cout << "\n==================================\n" << endl;

    /***** VECTOR REFERENCE IN RANGE BASED LOOP *****/

    vector<string> vec {"C++", "Java", "Python", "C", "JavaScript", "Swift", "C#"};

    // Making copy of vector elements
    // Cannot manipulate the elements
    for(auto const str: vec)
        cout << str << " ";
    cout << endl << endl;

    // Referencing the vector elements
    // Now we can manipulate the elements using reference variable
    for(auto &str : vec) {
        str = "_" + str + "_";
        cout << str << " ";
    }
    cout << endl;

    return 0;
}