/**********************************************************************
 *
 * THIS POINTER
 * -> Points to the object of the current class
 * Can oly be used inside the class
 * Can be used to refer data members inside functions
 *
 * SYNTAX:
 *
 *      this->member-name = r-value;
 *      *(this).member-name = r-value;
 *
 **********************************************************************/

#include <iostream>

using namespace std;

class student
{
private:
    int marks;

public:
    int setMarks(int marks)
    {
        this->marks = marks;
    }

    int getMarks() { return (marks); }

    void printMarks()
    {
        cout << "\nMarks: " << marks;
    }

};

int main() {

    student s1;
    student s2;

    s1.setMarks(95);
    s2.setMarks(90);

    s1.printMarks();
    s2.printMarks();

    return 0;
}