/**
 * FUNCTIONS WITH DEFAULT ARGUMENTS:
 * Sometimes we repeatedly pass a same value to a function
 * We can reduce our efforts by setting a default value for a parameter
 *
 * Default values are assigned using the assignment operator in the formal parameters
 * In the Function Prototype
 * Default arguments are always at the end of all parameters
 *
 * We can skip those values during function call
 * And we can override the default arguments by explicitly providing a value in the function call
 *
 */

#include <iostream>

using namespace std;

void greetMale(string name, string prefix = "Mr.", string suffix = "");
void greetFemale(string name, string prefix = "Mrs.", string suffix = "");

int main() {

    cout << endl;

    greetMale("Prathamesh", "Dr.", "Phd");
    greetMale("Prathamesh", "Prof.");
    greetMale("Prathamesh");

    cout << "---------------------------" << endl;

    greetFemale("Kavya", "Dr.", "Phd");
    greetFemale("Kavya", "Prof.");
    greetFemale("Kavya");

    cout << endl;

    return 0;
}

void greetMale(string name, string prefix, string suffix){
    cout << prefix << name << ", " << suffix << endl;
}

void greetFemale(string name, string prefix, string suffix){
    cout << prefix << name << ", " << suffix << endl;
}

