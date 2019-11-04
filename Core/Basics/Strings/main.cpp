#include <iostream>
#include <string>

using namespace std;

/**
 * STRINGS IN C++
 * Strings in C++ are different from C but very much similar to Java
 * The STL has separate data-type for Strings
 * And we can include string library to further manipulate strings
 *
 * ADVANTAGES:
 * C++ strings are dynamic in size
 * And can be used with basic operators such as +,-,=,<, etc.
 *
 */

int main() {

    /** DECLARATION AND INITIALIZATION*/

    string s1;                      // Empty
    string s2 {"Hello World"};      // Hello World
    string s3 {s2};                 // Hello World
    string s4 {"Hello", 3};         // Hel

    // Copies s2
    // Starting index zero
    // Copy only 4 characters
    string s5 {s2, 0, 4};           // Hell

    // Initializes String of size 3
    // And initializes all to X
    string s6 (3, 'X');             // XXX


    /** CONCATENATION: */

    s1 = "Hello";
    s2 = " World";
    string concat {};

    concat = "The result is: " + s1 + s2 + "!";
    cout << concat << endl;
    cout << "---------------------------------------" << endl;

    // ILLEGAL
    // concat = "Hello " + "World!";

    getchar();

    /** SUBSTRINGS
     *
     * SYNTAX:
     *
     *  object.substr(starting_index, size_t);
     *
     *  Returns the Substring
     */

    s3 = "This is a String";

    cout << s3.substr(0, 4) << endl;        // This
    cout << s3.substr(5, 2) << endl;        // is
    cout << s3.substr(10, 6) << endl;       // String
    cout << "---------------------------------------" << endl;

    getchar();

    /**
     * SEARCHING:
     * Accomplished by find() Method
     *
     * SYNTAX:
     *
     *      object.find(search_string);
     *
     * Returns Index of first substring
     * Returns string::npos if substring wasn't found
     */

    cout << s3.find("This") << endl;
    cout << s3.find("is") << endl;
    cout << s3.find("String") << endl;
    cout << s3.find("XX") << endl;
    cout << "---------------------------------------" << endl;

    getchar();

    /**
     * ERASING, CLEARING OR DELETING:
     *
     * erase() ----------> Removes certain part of string
     *
     *      object.erase(start_index, length);
     *
     * clear() ----------> Clears the whole string
     *
     *      object.clear(string_object);
     */

    cout << s3.erase(0, 5) << endl;
    cout << s3.erase(5, 4) << endl;
    cout << "---------------------------------------" << endl;

    s3.clear();

    /**
     * INPUTTING A STRING:
     * Inputting a string has same problems in C++ as in C
     * The input stream stops after getting a space
     * We solve that by using:
     *
     *      getline(input_stream, string_variable);
     *
     *      getline(input_stream, string_variable, delimiter);
     */

    cout << "Enter a string: " << endl;
    getline(cin, s4);

    cout << "Enter another string: " << endl;
    getline(cin, s5, 'S');

    cout << "\nInput 1: " << s4;
    cout << "\nInput 2: " << s5 << endl;


    return 0;
}