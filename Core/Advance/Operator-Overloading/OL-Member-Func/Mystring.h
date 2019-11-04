#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring {
private:
    char *str;

public:

    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);           // Deep Copy Constructor
    ~Mystring();                                // Destructor

    // Utility Functions
    void display() const;
    int getLength() const;
    const char *getString() const;

    /***** Overloading Assignment Operator *****/
    Mystring& operator=(const Mystring &rhs);           // Deep Copying
    Mystring& operator=(Mystring &&rhs) noexcept ;      // Moving

    /***** Overloading as Member Functions *****/
    Mystring operator-() const;                         // Lower Casing
    Mystring operator+(const Mystring &rhs) const;      // Concat
    bool operator==(const Mystring &rhs) const;         // Equality
};


#endif //MYSTRING_H
