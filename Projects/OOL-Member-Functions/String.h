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

    String operator-() const;
    String operator+(const String &rhs);
    String operator*(int n) const;

    bool operator==(const String &rhs) const;
    bool operator!=(const String &rhs) const;
    bool operator<(const String &rhs) const;
    bool operator>(const String &rhs) const;

    String operator+=(const String &rhs);
    String operator*=(int n);

    String operator++();            // Pre
    String operator++(int);         // Post
};


#endif //OOL_MEMBER_FUNCTIONS_STRING_H
