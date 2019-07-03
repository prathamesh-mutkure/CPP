/***********************************************************
 *
 * CLASSES AND OBJECTS:
 * Classes And Objects are fundamentals of OOP
 * They represent real world entities and have a very specific functionality
 *
 * Classes are User Defined Blueprints
 * Out of which Objects are created
 * A class basically has two things
 *
 *      1. Attributes (Member Variable)
 *      2. Methods (Functions)
 *
 * All objects have separate existence in memory
 * We can create multiple objects out of a class
 * Also Arrays and Pointers of an Object
 *
 *************************************************************
 *
 * ACCESSING MEMBER VARIABLES AND METHODS:
 * The Attributes and Methods of a class can be accessed using Dot (.) Operator
 * And Members of an pointer object by dereferencing it or by using Arrow (->) operator
 *
 * ***********************************************************
 *
 * PACKAGE ACCESS:
 * We can set access to Class Members by using public, private or protected keyword followed by a (:)
 * All the members will follow the specified access until encounters some other specification
 *
 * 1. PUBLIC
 * -> Available to everyone
 *
 * 2. PRIVATE
 * -> Available only in a class where it is declared
 *
 * 3. PROTECTED
 * -> Similar to private but used while performing Inheritance
 * -> Follow rules of private but can be used inn Derived Classes
 *
 *************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {

public:

    // Attributes
    string name {""};
    double balance {0.0};


    // Methods
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
    }

    void displayInfo(){
        cout << "\nName: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

};

int main() {

    /********** CREATING OBJECTS OF ACCOUNT CLASS **********/

    // Declaring Object
    Account acc1;
    Account acc2;

    // Array of Objects
    Account accounts[] {acc1, acc2};

    // Vector of Object
    vector<Account> acc_vec {acc1};
    acc_vec.push_back(acc2);

    /*** Pointer to Object ***/

    Account *acc = {nullptr};

    /*** Dynamic Memory Allocation to Object ***/

    acc = new Account;

    // Deleting memory
    delete acc;


    /********** ACCESSING MEMBERS OF AN CLASS **********/

    Account john;
    Account *jane {nullptr};
    jane = new Account;

    john.name = "John";
    john.deposit(1000.0);
    john.withdraw(100.0);
    john.displayInfo();

    (*jane).name = "Jane";      // Dereferencing
    jane->deposit(2000);        // Arrow Operator
    jane->withdraw(600);        // Easy to use and read
    jane->displayInfo();

    delete jane;

    return 0;
}