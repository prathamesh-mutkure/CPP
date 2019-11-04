/*****************************************************
 *
 * STATIC MEMBERS:
 * -> The static data members belongs to the class, not to any specif objects
 * -> They are shared among different objects
 * -> Static member variables needs to be initialized outside the class before use
 * -> And static methods can be called without using objects, by simply using Scope Resolution Operator and Class Name
 *
 * SYNTAX:
 *
 *      class-name::member-variable = r-value;
 *      class-name::method();
 *
 *****************************************************/

#include <iostream>

using namespace std;

class Student
{
    int roll;
    float marks;
    static int count;
public:
    Student(int roll, float marks)
    {
        this->roll = roll;
        this->marks = marks;
        ++count;
    }

    ~Student()
    {
        --count;
    }

    static int getClassCount()
    {
        return count;
    }

    static void showClassCount()
    {
        cout << "\nCount = " << getClassCount();
    }

};

int Student::count = 0;

int main() {

    Student::showClassCount();

    Student s1(1, 80);
    Student s2(2, 70);
    {
        Student s3(3, 90);
        Student::showClassCount();
    }
    Student s4(4, 95);
    Student::showClassCount();

    auto* s5 = new Student(5, 100);
    Student::showClassCount();
    delete s5;
    Student::showClassCount();

    return 0;
}