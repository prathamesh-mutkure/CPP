#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring() : str(nullptr) {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s) : str (nullptr) {

    if (s == nullptr) {
        Mystring();
    } else {
        str = new char[std::strlen(s)+1];
        strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring &source) : str(nullptr) {
    str = new char[std::strlen(source.str) + 1];
    strcpy(str, source.str);
}

Mystring::~Mystring() {
    delete [] str;
}

void Mystring::display() const {
    std::cout << str << " : " << getLength() << std::endl;
}

int Mystring::getLength() const { return strlen(str); }

const char *Mystring::getString() const { return str; }

/*************** OVERLOADING = OPERATOR ***************************/

Mystring & Mystring::operator = (const Mystring &rhs) {

    // checking for same assignment
    if (this == &rhs)
        return *this;

    // Deleting existing space
    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);

    return *this;
}

/*************** OVERLOADING = OPERATOR MOVE ***************************/

Mystring& Mystring::operator=(Mystring &&rhs){

    // checking for self assignment
    if (this == &rhs)
        return *this;

    // Deleting the current string
    delete[] this->str;

    // Pointing to the existing string
    str = rhs.str;

    // Nullifying the temporary string
    rhs.str = nullptr;

    return *this;
}