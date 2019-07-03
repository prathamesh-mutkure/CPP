#include <iostream>
#include <string>

using namespace std;

/**
 * STRING ENCRYPTER:
 * We will input a string, and replace all characters with some other
 * Using C++ string functions
 */

int main() {

    string input {}, encry {}, decry {};

    // Input
    cout << "\nEnter your message: ";
    getline(cin, input);
    cout << "Your message: " << input << endl;

    /** ENCRYPTION */
    for (int i = 0; i < input.length() ; ++i) {

        // Changing the ASCII Value
        int ch = input.at(i) + 10;

        // Adding to encry string
        encry.push_back(static_cast<char>(ch));
    }

    /** DECRYPTION */
    for (int i = 0; i < encry.length() ; ++i) {

        // Restoring the ASCII Value
        int ch = encry.at(i) - 10;

        // Saving to decry string
        decry.push_back(static_cast<char>(ch));
    }

    cout << "Encrypted Message: " << encry << endl;
    cout << "Decrypted Message: " << decry << endl;

    return 0;
}