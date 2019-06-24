#include <iostream>

using namespace std;

/**
 * SAMPLER PROBLEM:
 *
 * INPUT: Input cents
 * User Enters 267 cents
 *
 * OUTPUT:
 * Dollar : 2
 * Quarter : 2
 * Dime : 1
 * Nickel : 1
 * Penny : 2
 *
 * EXPLANATIONS:
 *
 * Dollar : 100 cents
 * Quarters : 25 cents
 * Dimes : 10 cents
 * Nickel : 5 cents
 * Penny : 1 cent
 *
 */

int main() {

    // Values of each in cents
    const int dollarValue {100};
    const int quarterValue {25};
    const int dimeValue {10};
    const int nickelValue {5};
    const int pennyValue {1};

    int dollar{0}, quarter{0}, dime{0}, nickel{0}, penny{0};
    int amount {};

    // Inputting
    cout << "Enter amount in cents: ";
    cin >> amount;

    dollar = amount/dollarValue;
    amount -= (dollar * dollarValue);

    quarter = amount/quarterValue;
    amount -= (quarter * quarterValue);

    dime = amount/dimeValue;
    amount -= (dime * dimeValue);

    nickel = amount/nickelValue;
    amount -= (nickel * nickelValue);

    penny = amount/pennyValue;

    // Outputting
    cout << "Dollar: " << dollar << endl;
    cout << "Quarter: " << quarter << endl;
    cout << "Dime: " << dime << endl;
    cout << "Nickel: " << nickel << endl;
    cout << "Penny: " << penny << endl;

    return 0;
}