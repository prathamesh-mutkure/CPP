#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {

    Mystring my1 {"Hello"};
    my1 = Mystring{"Hola"};
    my1 = "Nameste";

    return 0;
}