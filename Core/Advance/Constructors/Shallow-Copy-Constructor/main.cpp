/**********************************************************************
 *
 * SHALLOW COPY CONSTRUCTOR:
 * The last constructor for copy will work fine form normal elements
 * But it will create problem when used with pointers
 * As that will copy the address of pointer not the value pointed by it
 *
 * When we call a function using shallow copy, the address of pointer gets copied
 * So, both objects points to same data
 * But when the function end, the memory allocated for the copy gets freed up
 * Thus, the pointer will get cleared up
 * But, the original object will still be pointing to that address
 * Thus, the program would crash
 *
 * TO prevent this we use Deep Copy Constructor
 *
 *
 **********************************************************************/

#include <iostream>

using namespace std;

class Shallow {

private:
    int *data;

public:
    explicit Shallow(int d = 0);

    // Copy Constructor
    Shallow(const Shallow &source);

    // Destructor
    ~Shallow();

    inline void setData(int d) { *data = d; }
    inline int getData() { return *data; }

};

void printData(Shallow shallow){
    cout << "\nThe data is: " << shallow.getData() << endl;
}

int main() {

    Shallow obj1;
    obj1.setData(10);
    printData(obj1);

    Shallow obj2 {obj1};
    obj2.setData(1000);
//    printData(obj2);


    return 0;
}

/***** Copy constructor *****/

Shallow::Shallow(const Shallow &source) : data {source.data} { }

// Constructor
Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::~Shallow() {
    cout << "\nDestructor Called" << endl;

    delete data;
}