#include <cctype>
#include "String.h"

String::String(): str {nullptr}
{
    str = new char[1];
    str[0] = '\0';
}

String::String(const char *s) : str {nullptr}
{
    if (s == nullptr)
        String();
    else {
        str = new char[std::strlen(s) + 1];
        strcpy(str, s);
    }
}

String::String(const String &source) : str {nullptr} {
    this->str = new char[strlen(source.str)];
    strcpy(this->str, source.str);
}

String::~String() {
    delete[] str;
}

void String::display() {
    std::cout << this->str << std::endl;
}

/******* OVERLOADING = ********/

String &String::operator=(const String &rhs) {

    if (this == &rhs)
        return *this;

    delete[] str;
    this->str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);

    return *this;
}

String &String::operator=(String &&rhs)
{
    if (this == &rhs)
        return *this;

    delete[] str;
    this->str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

// Lowercase
String operator-(String &obj) {
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);

    for (size_t i = 0; i < strlen(obj.str); ++i)
        buff[i] = (char) std::tolower(buff[i]);

    String temp {buff};
    delete[] buff;

    return temp;
}

// Concat
String operator+(const String &lhs, const String &rhs) {
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);

    String temp {buff};
    delete[] buff;

    return temp;
}

// Repeat
String operator*(String &lhs, int n) {
    String temp;

    for (int i = 0; i < n; ++i)
        temp = temp + lhs;

    return temp;
}

// Equality
bool operator==(const String &lhs, const String &rhs) {
    return strcmp(lhs.str, rhs.str) == 0;
}

bool operator!=(const String &lhs, const String &rhs) {
    return strcmp(lhs.str, rhs.str) != 0;
}

bool operator<(const String &lhs, const String &rhs) {
    return strcmp(lhs.str, rhs.str) < 0;
}

bool operator>(const String &lhs, const String &rhs) {
    return strcmp(lhs.str, rhs.str) > 0;
}

String operator+=(String &lhs, const String &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

String operator*=(String &lhs, int n) {
    lhs = lhs * n;
    return lhs;
}

String operator++(String &obj) {

    for (size_t i = 0; i < strlen(obj.str); ++i)
        obj.str[i] = (char) std::toupper(obj.str[i]);

    return obj;
}

String operator++(String &obj, int) {
    String temp {obj};
    operator++(obj);
    return temp;
}