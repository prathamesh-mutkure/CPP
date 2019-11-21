#include <iostream>

using namespace std;

/************************************************************8
 *
 * REFERENCES IN POLYMORPHISM:
 * -> Like pointers we can also use references in Dynamic Polymorphism
 * -> They work exactly same as with pointers
 *
 ************************************************************/

class Account {
protected:
    string name;
    double balance;
    string type;
public:
    Account (string name =  "", double balance = 0.0) : name {name}, balance {balance} {
        type = "account";
    }
    virtual void print() {
        cout << "\nType : " << type << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

class Savings_Account : public Account {
public:
    Savings_Account(string name =  "", double balance = 0.0) : Account (name, balance) {
        type = "saving";
    }
    void print() override {
        cout << "\nType : " << type << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

class Current_Account : public Account {
public:
    Current_Account(string name =  "", double balance = 0.0) : Account (name, balance) {
        type = "current";
    }
    void print() override {
        cout << "\nType : " << type << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

void display(Account &account) {
    account.print();
}

int main() {

    Account acc("John", 10000);
    Savings_Account s_acc("Jane", 15000);
    Current_Account c_acc("Johnny", 20000);

    display(acc);
    display(s_acc);
    display(c_acc);

    Account *p = &s_acc;

    return 0;
}