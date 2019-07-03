/***************************************
 *
 * DYNAMIC MEMORY ALLOCATION:
 * In C++ we can Dynamically allocate memory to any variable/pointer/array at Run Time
 * This can be performed by using new keyword
 *
 * But we must always delete memory we created
 * After our task is complete
 * This can be done using the delete keyword
 *
 * After Deleting, the value stored in the Address gets to NULL
 *
 ***************************************/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    /*********** DMA FOR VARIABLES *************/

    /* Declaring a NULL pointer */
    int *int_ptr {nullptr};

    /* Allocating Memory of size int
     * This will reserve a Memory Address for that Pointer */
    int_ptr = new int;

    cout << int_ptr << endl << endl;        // Printing the Address

    /* Deleting the Memory */
    delete int_ptr;


    /************ DMA FOR ARRAYS ****************/

    vector<int> *vec {};
    size_t size {0};

    cout << "Enter the size of Vector you want: ";
    cin >> size;

    // Allocation
    vec = new vector<int>(size);

    cout << "Size of Vector with " << size << " elements is: " << sizeof(vec) << endl;

    delete[] vec;

    return 0;
}