/********************************************************
 *
 * CONSTRUCTOR INITIALIZATION LIST:
 * When we call a constructor, the Member variables of the class for the object gets initialized with garbage values
 * So, an object creation three things happen:
 *
 *  1. Constructor Call and Initialization of member variables.
 *  2. Assignment of member variables
 *  3. Destructor call
 *
 * We can avoid initialization to garbage data, and provide a default value
 * This way we can also skip 2nd step of assignment
 * This will reduce execution speed in large programs
 *
 * SYNTAX:
 *
 *      class-name(arguments) : initialization(s) {
 *              // body
 *      }
 *
 *
 ********************************************************/

#include <iostream>

using namespace std;

class Dog {

private:
    string name;
    string color;
    int age;

public:

    Dog();
    Dog(string n);
    Dog(string n, string clr, int a);

    void setName(string n);
    void setColor(string clr);
    void setAge(int a);

    void displayInfo();

};

int main() {

    Dog tom;
    tom.setName("Tom");
    tom.setColor("Black");
    tom.setAge(5);
    tom.displayInfo();

    Dog tommy("Tommy");
    tommy.setColor("White");
    tommy.setAge(3);
    tommy.displayInfo();

    Dog bruno("Bruno", "Brown", 8);
    bruno.displayInfo();

    return 0;
}

/**** Empty body constructors *****/

Dog::Dog() : name {""}, color {""}, age {0} { }

Dog::Dog(string n): name {n}, color {""}, age {0}  { }

Dog::Dog(string n, string clr, int a) : name{n}, color {clr}, age {a} { }

void Dog::displayInfo() {
    cout << "\nDog name: " << name << endl;
    cout << "Dog color: " << color << endl;
    cout << "Dog age: " << age << endl;
}

void Dog::setName(string n) {name = n;}
void Dog::setColor(string clr) {color = clr;}
void Dog::setAge(int a) {age = a;}