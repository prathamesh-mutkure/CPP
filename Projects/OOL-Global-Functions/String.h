#ifndef OOL_MEMBER_FUNCTIONS_STRING_H
#define OOL_MEMBER_FUNCTIONS_STRING_H


#include <iostream>
#include <cstring>
#include <iosfwd>

class String {
private:
    char *str;

public:

    // Constructors and Destructors
    String();
    String(const char *s);
    String(const String &source);
    ~String();

    // Output
    void display();

    // Assignment overloading
    String &operator=(const String &rhs);
    String &operator=(String &&rhs);

    friend String operator-(String &obj);
    friend String operator+(const String &lhs,const String &rhs);
    friend String operator*(String &lhs, int n);

    friend bool operator==(const String &lhs, const String &rhs);
    friend bool operator!=(const String &lhs, const String &rhs);
    friend bool operator<(const String &lhs, const String &rhs);
    friend bool operator>(const String &lhs, const String &rhs);

    friend String operator+=(String &lhs, const String &rhs);
    friend String operator*=(String &lhs, int n);

    friend String operator++(String &obj);
    friend String operator++(String &obj, int);
};


#endif //OOL_MEMBER_FUNCTIONS_STRING_H
