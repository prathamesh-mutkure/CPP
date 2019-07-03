/**************************************************
 *
 * DEFAULT ARGUMENT CONSTRUCTOR:
 * To make things more easy and simple we can declare a constructor with default Arguments
 * Just like we do with functions
 *
 * We just need to declare one All arg constructor
 * And then assign default values to all the argument
 * And we can then only call the constructor with first few arguments
 * And other will automatically init to default values
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

    Dog(string n = "None", string clr = "None", int a = 0);

    void setName(string n);
    void setColor(string clr);
    void setAge(int a);

    void displayInfo();

};

int main() {

    Dog empty;
    empty.displayInfo();

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

Dog::Dog(string n, string clr, int a) : name{n}, color {clr}, age {a} { }

void Dog::displayInfo() {
    cout << "\nDog name: " << name << endl;
    cout << "Dog color: " << color << endl;
    cout << "Dog age: " << age << endl;
}

void Dog::setName(string n) {name = n;}
void Dog::setColor(string clr) {color = clr;}
void Dog::setAge(int a) {age = a;}