#include <iostream>
#include "String.h"

using namespace std;

int main() {

    cout << boolalpha;

    String s1 {"hello"};
    String s2 {" world"};
    String s3;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}