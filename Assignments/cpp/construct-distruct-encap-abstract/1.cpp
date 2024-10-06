#include <iostream>
using namespace std;

// Inline function to calculate the multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate the cubic value of a number
inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate multiplication and cubic values using inline functions
    int multiplicationResult = multiply(num1, num2);
    int cubicResult1 = cubic(num1);
    int cubicResult2 = cubic(num2);

    // Display the results
    cout << "Multiplication of two no:  " << num1 << " and " << num2 << " is: " << multiplicationResult << endl;
    cout << "Cubic value of " << num1 << " is: " << cubicResult1 << endl;
    cout << "Cubic value of " << num2 << " is: " << cubicResult2 << endl;

    return 0;
}
