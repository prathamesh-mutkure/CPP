#include <iostream>
#include <vector>

using namespace std;

/**
 * RANGED BASED FOR LOOP:
 * Identical to For-Each loop in Java
 * Automatically iterates over elements in an Array and Vector
 * Can also be used to iterate over individual characters of a String
 *
 * The only disadvantage of it is we can't keep track of indexes
 * But can be solved by doing work-arounds
 *
 */

/**
 * auto keyword:
 * The auto keyword in this loop automatically detects the data-type of variable
 * Handy when dealing with complex data-types
 */

int main() {

    cout << endl;

    /** Using with Array */
    int arr[] = {10, 20, 30, 40, 50};

    for (int num : arr){
        cout << num << "\t";
    }

    cout << endl;

    /** Using with vector*/

    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto element : vec){
        cout << element << "\t";
    }

    cout << endl;

    /** Using with Strings */

    for (auto ch : "Hello"){
        cout << ch << "\t";
    }

    cout << endl;



    return 0;
}