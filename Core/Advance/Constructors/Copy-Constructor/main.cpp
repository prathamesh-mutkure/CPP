/*******************************************************************
 *
 * COPY CONSTRUCTOR:
 * We can define a Constructor solely for the purpose of copying an Object
 * Because if we don't define our own constructor then the Compiler will use the in-built constructor
 * Which can be fine but can create problem with increasing complexity like when using pointers
 * This can be solved by explicitly writing our own constructor
 *
 * This Constructor is invoked whenever a copy of our Object is made
 * Also when we pass Object to another function
 * The object gets copied to to Formal Parameters and the copy constructor is invoked
 *
 * Or gets invoked when we init new Object to existing object
 *
 ******************************************************************/

#include <iostream>

using namespace std;

class Animal {

private:
    string name;
    int age;

public:
    explicit Animal(string n = "None", int a = 0);

    void setName(string n);
    void setAge(int a);

    string getName();
    int getAge();

    // Copy Constructor
    Animal(const Animal &a);

};

/********** COPY CONSTRUCTOR IMPLEMENTATION **********/

Animal::Animal(const Animal &a) : Animal(a.name, a.age) {
    cout << "\nCopy Constructor called for " << a.name << endl;
}

/*** Display Animal ***/

void displayInfo(Animal animal){
    cout << "Name of Animal: " << animal.getName() << endl;
    cout << "Age of Animal: " << animal.getAge() << endl;
}

int main() {

    Animal Dog("Bruno", 8);
    displayInfo(Dog);

    Animal Cat("Snow", 4);
    displayInfo(Cat);

    Animal Human;
    Human.setName("Man");
    Human.setAge(26);
    displayInfo(Human);

    Animal Tiger {Human};
    displayInfo(Tiger);

    return 0;
}

/***** ANIMAL METHOD IMPLEMENTATIONS *****/

Animal::Animal(string n, int a) : name {n}, age {a}  {}

void Animal::setName(string n) {name = n;}
void Animal::setAge(int a) {age = a;}

string Animal::getName() { return name;}
int Animal::getAge() { return age;}