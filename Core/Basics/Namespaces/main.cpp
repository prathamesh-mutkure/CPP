#include <iostream>

/*
 * NAMESPACES:
 * When including several libraries, we may have identical identifiers, from different libraries
 * And the compiler may get confuse
 * We solve this by using Namespaces
 * ------------>
 *
 * library-name::function-name
 *
 */

/*
 * SOME OPERATORS:
 *
 * :: ---------> Scope resolution operator
 * << ---------> Insertion operator
 * >> ---------> Extraction operator
 *
 */

/*
 * QUALIFIED USING NAMESPACE VARIANT:
 *
 * Predefining an Identifier from an specific library
 * Like below:
 *
 */

using std::cin;
using std::cout;
using std::endl;

int main() {

    // This will make cout function call from only std library

    cout << "Hello Namespace" << endl;

    return 0;
}