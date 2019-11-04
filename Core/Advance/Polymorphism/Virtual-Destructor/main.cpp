#include <iostream>
#include <vector>

using namespace std;

/***********************************************************
 *
 * VIRTUAL DESTRUCTOR:
 * -> When we use virtual functions, we must always use virtual destructor
 * -> So that when we delete the Base Class Pointer to derived class,
 * -> The call is made to Derived class Destructor
 *
 * SYNTAX:
 *
 *      virtual ~Class() {
 *          // Body
 *      }
 *
 * -> Once destructor is declared virtual in Base class, all destructors in derived also become virtual
 *
***********************************************************/

class Account {
public:
    virtual void withdraw() {
        cout << "Account::withdraw()" << endl;
    }
    virtual ~Account() {
        cout << "Account Destructor" << endl;
    }
};

class Saving_Account : public Account {
public:
    void withdraw() {
        cout << "Saving_Account::withdraw()" << endl;
    }
    ~Saving_Account() {
        cout << "Saving_Account Destructor" << endl;
    }
};

class Bonds_Account : public Account {
public:
    void withdraw() {
        cout << "Bonds_Account::withdraw()" << endl;
    }
    ~Bonds_Account() {
        cout << "Bonds Account Destructor" << endl;
    }
};

class Current_Account : public Account {
public:
    void withdraw() {
        cout << "Current_Account::withdraw()" << endl;
    }
    ~Current_Account() {
        cout << "Current Account Destructor" << endl;
    }
};

int main() {

    cout << endl;

    Account *p1 = new Account;
    Account *p2 = new Saving_Account;
    Account *p3 = new Bonds_Account;
    Account *p4 = new Current_Account;

    p1->withdraw();
    p2->withdraw();
    p3->withdraw();
    p4->withdraw();

    cout << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}