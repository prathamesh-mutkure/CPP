#include "Account.h"

#include <iostream>

using namespace std;

void Account::setName(string n) {
    name = n;
}

string Account::getName() {
    return name;
}

void Account::deposite(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    balance -= amount;
}

void Account::displayInfo() {
    cout << "\nAccount Name: " << name << endl;
    cout << "Account Balance: " << balance << "$" << endl;
}