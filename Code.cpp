#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
int getDigit(const int number);
int sumEvenDigits(const string cardNumber);
int sumOddDigits(const string cardNumber);

int main() {

    string cardNumber;
    int result = 0;

    // Infinite loop to keep the program running
    do {
        cout << "Enter a credit card #: ";
        cin >> cardNumber;

        // Calculate total sum using Luhn Algorithm logic
        result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

        // Check if the total sum is divisible by 10
        if (result % 10 == 0) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }

    } while (true);

    system("pause");
    return 0;
}

// Helper function: Handles the "double digit" rule
// If a number is 18, it returns 1 + 8 = 9. If 8, it returns 8.
int getDigit(const int number) {
    // The logic: num % 10 gets the last digit, num / 10 gets the first digit
    return number % 10 + (number / 10 % 10);
}

// Function to sum digits at EVEN positions (from right to left)
int sumEvenDigits(const string cardNumber) {
    int sum = 0;

    // Loop from the second to last digit, moving left by 2 steps
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        // 1. Convert char to int: (cardNumber[i] - '0')
        // 2. Double the value: * 2
        // 3. Process with getDigit function
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}

// Function to sum digits at ODD positions (from right to left)
int sumOddDigits(const string cardNumber) {
    int sum = 0;

    // Loop from the last digit, moving left by 2 steps
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        // Convert char to int and add to sum directly
        sum += getDigit(cardNumber[i] - '0');
    }
    return sum;
}