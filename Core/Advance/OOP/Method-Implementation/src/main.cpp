/****************************************************
 *
 * METHOD IMPLEMENTATION:
 * We have multiple ways of implementing methods in C++
 *
 * 1. INSIDE CLASS
 * -> Most easy way, by declaring and defining all at once
 *
 * 2. PROTOTYPING INSIDE CLASS IMPLEMENTING OUTSIDE OF IT
 * -> We can create function prototype inside the class
 * -> And the implement the functionality outside of it
 * -> This can be done by using the Scope Resolution operator
 * -> Which tells the compiler about which method are implementing
 * -> SYNTAX:
 *
 *      return-type class-name::method-name(parameter list) {body}
 *
 * 3. OUTSIDE OF MAIN FILE
 * -> When the program gets larger and complex it's better to separate implementation from main file
 * -> And implement functions in other file
 * -> And then including them as Pre-Processor or Header files
 *
 ****************************************************/

#include <iostream>

#include "Account.h"

using namespace std;

class Dog {

private:
    string name {""};
    unsigned short age {0};

public:
    void setName(string name);
    void setAge(unsigned short);

    string getName();
    unsigned short getAge();
};

int main() {

    Dog bruno;
    bruno.setName("Bruno");
    bruno.setAge(7);

    cout << "\nThe age of " << bruno.getName() << " is " << bruno.getAge() << " years." << endl;

    cout << "\n============================================================\n";

    /********** EXTERNAL CLASS OBJECTS ************/

    Account john;
    john.setName("John");
    john.deposite(5000);
    john.withdraw(2100);
    john.displayInfo();

    Account jane;
    jane.setName("Jane");
    jane.deposite(3200);
    jane.withdraw(500);
    jane.displayInfo();

    return 0;
}

/***** METHOD IMPLEMENTATIONS *****/

void Dog::setName(string n) {name = n;}
void Dog::setAge(unsigned short a) {age = a;}

string Dog::getName() { return name;}
unsigned short Dog::getAge(){ return age;}