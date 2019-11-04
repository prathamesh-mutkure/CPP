#include <iostream>

using namespace std;

/*************************************************************
 *
 * REDEFINING BASE CLASS METHODS:
 * We can override base class methods in Derived class
 * By declaring it with same name and signature
 * And continue to use the previous functionality
 *
 *************************************************************/

class Account {
protected:
    double balance;
public:
    Account(double balance = 0.0) : balance {balance} {
        cout << "Account constructor" << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient Funds" << endl;
        else
            balance -= amount;
    }
    friend ostream &operator<<(ostream &os, Account &account);
};

ostream &operator<<(ostream &os, Account &account) {
    os << "Account balance : " << account.balance;
    return os;
}

class Saving_Account : public Account {
protected:
    float int_rate;
public:
    Saving_Account(double balance = 0.0, float int_rate = 0.0) {
        this->balance = balance;
        this->int_rate = int_rate;
        cout << "Saving Account Constructor" << endl;
    }

    void deposit(double amount) {
        Account::deposit(amount);
        balance += amount * int_rate/100;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient Funds" << endl;
        else
            balance -= amount;
    }
    friend ostream &operator<<(ostream &os, Saving_Account &account);
};

ostream &operator<<(ostream &os, Saving_Account &account) {
    os << "Account balance : " << account.balance;
    return os;
}

int main() {

    cout << endl;
    Saving_Account acc(10000, 10);
    acc.deposit(1000);
    cout << acc << endl;

    return 0;
}