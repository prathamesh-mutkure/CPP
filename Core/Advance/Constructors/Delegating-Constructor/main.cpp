/**************************************************
 *
 * DELEGATING CONSTRUCTOR:
 * Most of the time the body of the Overloaded Constructors are same.
 * They just have different Initialization Values
 * We can write an All arg Constructor
 * Then call it from other constructor
 * And set only required values
 * And remaining values to NULL
 * This avoids recurring code
 *
 **************************************************
 *
 * The explicit keyword can be used in single argument constructors
 * This will prevent implicit conversions by the compiler
 * And thus, to ensure better correct results
 *
 **************************************************/

#include <iostream>

using namespace std;

class Dog {

private:
    string name;
    string color;
    int age;

public:

    Dog();
    explicit Dog(string n);
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

    Dog bruno{"Bruno", "Brown", 8};
    bruno.displayInfo();

    return 0;
}

/***** Empty body constructors *****/

Dog::Dog() : Dog{"", "", 0} {
    cout << "No args constructor called" << endl;
}

Dog::Dog(string n) : Dog {n, "", 0}  {
    cout << "One args constructor called" << endl;
}

Dog::Dog(string n, string clr, int a) : name{n}, color {clr}, age {a} {
    cout << "\nThree args constructor called" << endl;
}

void Dog::displayInfo() {
    cout << "Dog name: " << name << endl;
    cout << "Dog color: " << color << endl;
    cout << "Dog age: " << age << endl;
}

void Dog::setName(string n) {name = n;}
void Dog::setColor(string clr) {color = clr;}
void Dog::setAge(int a) {age = a;}