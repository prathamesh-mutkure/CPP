#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {

    int random {}, min {5}, max {15};

    cout << "\nThe maximum possible Random number is: " << RAND_MAX << endl << endl;

    for (size_t i = 0; i < 10; ++i) {
        random = rand()%max + min;
        cout << random << "\t";
    }

    cout << endl;

    return 0;
}