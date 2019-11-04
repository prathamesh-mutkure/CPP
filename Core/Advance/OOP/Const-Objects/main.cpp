/***********************************************
 *
 * CONSTANT OBJECTS:
 * -> We can declare objects as const
 * -> But once an object is declared as const, we cannot invoke its member functions
 * -> Even if the method doesn't actually change the data
 * -> The compiler assumes that the Method may modify the data, and doesnt allow the operation
 * -> Thus producing Error
 *
 * -> We can overcome this declaring functions as const
 * -> Which tells the Compiler that we don't modify data inside the function
 * -> And hence data can no longer be edited from that function
 *
 * SYNTAX:
 *      function-declaration const;
 *
 ***********************************************/

#include <iostream>

using namespace std;

class Student
{
    string name;
    float marks;
public:
    Student (string name, float marks)
    {
        this->name = name;
        this->marks = marks;
    }

    int getMarks() { return marks; }

    void displayData() const
    {
        cout << endl << name << " has scored " << marks << " marks!" << endl;
    }
};

int main() {

    const Student s1("John", 90);
    const Student s2("Jane", 85);

//    s1.getMarks();    // Error
//    s2.getMarks();    // Error

    s1.displayData();
    s2.displayData();

    return 0;
}