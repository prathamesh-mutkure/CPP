#include <iostream>
#include "String.h"

using namespace std;

int main() {

    cout << boolalpha;

    String s1 {"Hello"};
    String s2 {"World"};
    String s3;
    String s4;

    s3 = ++s1;
    s4 = s2++;

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}