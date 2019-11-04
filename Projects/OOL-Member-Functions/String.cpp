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
String String::operator-() const
{
    char *buff = new char[strlen(str) + 1];

    for (size_t i = 0; i < strlen(str); ++i) {
        buff[i] = (char)std::tolower(str[i]);
    }

    String temp {buff};

    delete[] buff;
    return temp;
}

// Concat
String String::operator+(const String &rhs) {
    char *buff = new char[strlen(this->str) + strlen(rhs.str) + 1];
    strcpy(buff, this->str);
    strcat(buff, rhs.str);

    String temp {buff};
    delete[] buff;

    return temp;
}

// Equality
bool String::operator==(const String &rhs) const {
    return strcmp(str, rhs.str) == 0;
}

bool String::operator!=(const String &rhs) const {
    return strcmp(str, rhs.str) != 0;
}

bool String::operator<(const String &rhs) const {
    return (strcmp(str, rhs.str) < 0);
}

bool String::operator>(const String &rhs) const {
    return (strcmp(str, rhs.str) > 0);
}

// Repeating characters n times
String String::operator*(int n) const {

    char *buff = new char[strlen(str) * n + 1];
    strcpy(buff, str);

    for (int i = 1; i < n; ++i) {
        strcat(buff, str);
    }

    String temp {buff};
    delete[] buff;

    return temp;
}

String String::operator+=(const String &rhs) {
    *this = *this + rhs;
    return *this;
}

String String::operator*=(int n) {
    *this = (*this) * n;
    return *this;
}

String String::operator++() {
    for (size_t i = 0; i < strlen(str); ++i)
        str[i] = (char) std::toupper(str[i]);

    return *this;
}

String String::operator++(int) {
    const String temp {*this};
    operator++();
    return temp;
}