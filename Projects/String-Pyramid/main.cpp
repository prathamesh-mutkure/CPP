#include <iostream>
#include <string>

using namespace std;

int main() {

    string input{};

    cout << "Enter a string: ";
    getline(cin, input);
    cout << endl << endl;

    // Logic
    for (int i = 0; i < input.length(); ++i) {

        // Print White Spaces
        for (int k = input.length() - i; k > 0; --k) {
            cout << " ";
        }

        // Displaying the characters until one less than current center
        for (int j = 0; j < i; ++j) {
            cout << input.at(j);
        }

        // Center Character
        cout << input.at(i);

        // Display remaining characters in reverse order
        for (int l = i-1; l >= 0; --l) {
            cout << input.at(l);
        }

        // New Line at the end
        cout << endl;
    }

    return 0;
}