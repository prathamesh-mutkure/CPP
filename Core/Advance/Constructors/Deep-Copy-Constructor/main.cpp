/**
 *
 * DEEP COPY CONSTRUCTOR:
 *
 */

#include <iostream>

using namespace std;

class Deep {

private:
    int *data;

public:
    explicit Deep(int d = 0);
    ~Deep();

    Deep(const Deep &source);

    void setData(int d) { *data = d; }
    int getData() { return *data; }

};

void printValue(Deep deep) {
    cout << "\nThe value is: " << deep.getData() << endl;
}


int main() {

    Deep obj1(10);
    printValue(obj1);

    Deep obj2 {obj1};
    obj2.setData(1000);
    printValue(obj2);

    return 0;
}

Deep::Deep(const Deep &source) {
    data = new int;             // Allocating storage
    *data = *source.data;
    cout << "\nDeep Copy Called" << endl;
}

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::~Deep() {
    cout << "Destructor called (" << getData() << ")" << endl;
    delete data;
}