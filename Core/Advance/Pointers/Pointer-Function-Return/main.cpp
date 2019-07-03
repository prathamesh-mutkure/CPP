/***************************************************
 *
 * RETURNING POINTER FROM A FUNCTION:
 * We just need to return an Address or Pointer Variable
 * And add (*) to the return type
 *
 ***************************************************/

#include <iostream>

using namespace std;

int *largest(int*, int*);
int *createArray(size_t, int);
void display(const int*, size_t);

int main() {

    /***** LARGEST OF TWO *****/

    int a{}, b{};
    int *large {nullptr};

    cout << "Enter two Integers: ";
    cin >> a >> b;

    large = largest(&a, &b);

    cout << "Larger number is: " << *large << endl;


    /***** CREATING AND INITIALIZING ARRAY *****/

    int *myArray {nullptr};
    size_t size {};
    int initValue {};

    cout << "Enter the size of the Array: ";
    cin >> size;

    cout << "Initial Value: ";
    cin >> initValue;

    myArray = createArray(size, initValue);


    /***** DISPLAYING ARRAY *****/

    display(myArray, size);


    /***** DELETING ARRAY *****/

    delete[] myArray;

    return 0;
}

int *largest(int *a, int *b){
    if (*a > *b)
        return a;
    else
        return b;
}

int *createArray(size_t size, int initValue){

    int *newStorage {nullptr};

    newStorage = new int[size];

    for (int i = 0; i < size; ++i)
        *(newStorage + i) = initValue;

    return newStorage;
}

void display(const int*const array, size_t size) {
    for (int i = 0; i < size; ++i)
        cout << *(array + i) << " ";
    cout << endl;
}