//
// Created by prathamesh on 1/7/19.
//

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

using namespace std;

class Account {

private:
    string name {""};
    double balance {0.0};

public:

    void setName(string n);
    string getName();

    void deposite(double amount);
    void withdraw(double amount);

    void displayInfo();

};

#endif //_ACCOUNT_H_
