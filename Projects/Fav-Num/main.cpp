#include <iostream>

int main() {

    int favNum;

    // Input
    std::cout << "Enter your Favourite Number: " << std::endl;
    std::cin >> favNum;

    // Output
    std::cout << "That's my Favourite Number too" << std::endl;
    std::cout << "You entered: " << favNum << "\t-----" << std::endl;

    return 0;
}