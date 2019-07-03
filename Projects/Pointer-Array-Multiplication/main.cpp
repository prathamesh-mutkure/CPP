/**********************************************
 *
 * POINTERS:
 * Create a function as pass by reference which multiplies each element of an array with each of second array
 * And print those values using another function
 *
 * Dynamically allocate storage to new array
 * And delete the array after use
 *
 **********************************************/

#include <iostream>

using namespace std;

void apply_all(const int*, size_t, const int*, size_t);
void display(const int*, size_t);

int main() {

    int arr1[] {3, 2, 6, 5, 8};
    int arr2[] {5, 10, 11};

    apply_all(arr1, 5, arr2, 3);

    return 0;
}

void apply_all(const int* arr1, size_t size_1, const int* arr2, size_t size_2) {

    int pos {0};
    int *result = new int[size_1*size_2];

    for (int i = 0; i < size_1; ++i)
        for (int j = 0; j < size_2; ++j)
            *(result + pos++) = (*(arr1 + i)) * (*(arr2 + j));

    display(result, size_1*size_2);
    delete[] result;
}

void display(const int* arr, size_t size) {
    cout << endl;
    for (int i = 0; i < size; ++i)
        cout << *(arr + i) << " ";
    cout << endl;
}