#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring {
private:
    char *str;

public:

    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    void display() const;
    int getLength() const;
    const char *getString() const;

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
};


#endif //MYSTRING_H
