# 💳 Credit Card Validator (Luhn Algorithm)

## 📢 Author's Note
> **Topic:** Luhn Algorithm & String Manipulation
>
> - 🌏 **I'm not good at English!**
> - 🤖 Gemini only helped me complete the comments and translation.
> - 👨‍💻 **All code is mine, no copy.**
> - ⏱️ This topic took me *10 minutes**.

## 📝 About The Project
This project is a C++ console application designed to verify the validity of a credit card number.
It implements the **Luhn Algorithm** (also known as the Modulus 10 or Mod 10 algorithm), which is a simple checksum formula used to validate a variety of identification numbers.

## 🧠 The Logic (Luhn Algorithm)
The program processes the input string based on the following rules:

1.  **Traversal:** The program loops through the digits of the card number from **Right to Left**.
2.  **Even Positions (from the right):**
    - Double the value of the digit.
    - If the result is greater than 9 (e.g., $8 \times 2 = 16$), add the two digits of the result together (e.g., $1 + 6 = 7$).
3.  **Odd Positions (from the right):**
    - Keep the digit as is.
4.  **Validation:**
    - Sum all the processed values.
    - If the total sum is divisible by 10 (`sum % 10 == 0`), the card is **Valid**. Otherwise, it is **Invalid**.

## 🚀 Features
- ✅ **Modular Code:** Logic is split into helper functions (`getDigit`, `sumEvenDigits`, `sumOddDigits`) for better readability.
- ✅ **Infinite Loop:** The program uses a `do-while` loop, allowing users to check multiple cards without restarting the app.
- ✅ **No External Libraries:** Uses only standard C++ logic, no pre-built validation libraries.

## 🧪 Test Cases
You can try these numbers to test the program:

| Input Number | Expected Output |
| :--- | :--- |
| `4012888888881881` | **Valid** |
| `4012888888881882` | **Invalid** |
| `1234567890123456` | **Invalid** |

## 📸 Example Usage
```text
Enter a credit card #: 4012888888881881
Valid
Enter a credit card #: 1234567890123456
Invalid
