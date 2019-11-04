#include <iostream>
#include <vector>

using namespace std;

/***********************************************************
 *
 * VIRTUAL METHODS:
 * -> The virtual keyword tells the compiler to Dynamically Bind methods
 * -> at run time, achieving run-time polymorphism
 *
 * -> But in order to use them, we need to use Base Class Pointer
 * -> This feature very powerful
 *
 * SYNTAX :
 *
 *      virtual return-type name(parameters) {
 *              // Body
 *      }
 *
 * -> The re-definition needs to be identical, otherwise a compiler will statically bind it
 * -> The virtual keyword need not to be repeated but is good practice to do so
 *
***********************************************************/

class Account {
public:
    virtual void withdraw() {
        cout << "Account::withdraw()" << endl;
    }
};

class Saving_Account : public Account {
public:
    void withdraw() {
        cout << "Saving_Account::withdraw()" << endl;
    }
};

class Bonds_Account : public Account {
public:
    void withdraw() {
        cout << "Bonds_Account::withdraw()" << endl;
    }
};

class Current_Account : public Account {
public:
    void withdraw() {
        cout << "Current_Account::withdraw()" << endl;
    }
};

int main() {

    cout << endl;

    Account account;
    Saving_Account savingAccount;
    Bonds_Account bondsAccount;
    Current_Account currentAccount;

    // Account Pointer vector storing address of all types of accounts
    vector<Account*> acc;

    acc.push_back(&account);
    acc.push_back(&savingAccount);
    acc.push_back(&bondsAccount);
    acc.push_back(&currentAccount);

    // Calling withdraw method for account's pointer
    for (Account *account : acc) {
        account->withdraw();
    }

    return 0;
}