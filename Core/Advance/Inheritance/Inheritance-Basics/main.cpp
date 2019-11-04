#include <iostream>
#include <string>

/****************************************************
 *
 * INHERITANCE:
 * It is a mechanism by which we can create a new class out of old class
 *
 * SYNTAX:
 *
 *      class derived: access-modifier base {
 *          // Body
 *      }
 *
 * With inheritance, we can acquire the properties of an existing class
 *
 *
 ****************************************************/

using namespace std;

class Account {
public:
    double balance;
    std::string name;

    Account() : balance{0.0}, name {""} {}

    void deposit() {
        cout << "Account class deposit method\n";
    }

    void withdraw() {
        cout << "Account class withdraw method\n";
    }
};

class Saving_Acc : public Account {
public:
    float int_rate;

    Saving_Acc() : int_rate {3.50} { }

    void deposit() {
        cout << "Saving Account class deposit method\n";
    }

    void withdraw() {
        cout << "Saving Account class withdraw method\n";
    }
};

int main() {

    cout << endl;

    Account account;
    account.deposit();
    account.withdraw();

    cout << endl;

    Saving_Acc savingAcc;
    savingAcc.deposit();
    savingAcc.withdraw();

    return 0;
}