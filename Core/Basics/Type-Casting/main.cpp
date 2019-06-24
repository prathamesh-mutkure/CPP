#include <iostream>

using namespace std;

int main() {

    int num1 {}, num2 {}, num3 {}, total {};
    int count = 3;
    double avg;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    avg = static_cast<double> (total)/count;

    /**
     * OLD C-STYLE TYPE CASTING:
     *
     * avg = (double) total/count;
     *
     * Does not check for compatibility
     * Not recommend in Modern C++
     *
     */

    cout << "\nThe average is: " << avg << endl;

    return 0;
}