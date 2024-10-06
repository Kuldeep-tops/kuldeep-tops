#include <iostream>
using namespace std;

class SimpleCalculator {
public:
    double num1, num2;

    // Method to add two numbers
    double add() {
        return num1 + num2;
    }

    // Method to subtract two numbers
    double subtract() {
        return num1 - num2;
    }

    // Method to multiply two numbers
    double multiply() {
        return num1 * num2;
    }

    // Method to divide two numbers
    double divide() {
        if (num2 == 0) {
            cout << "Error! Division by zero." << endl;
            return 0; // Returning 0 for division by zero
        }
        return num1 / num2;
    }
};

int main() {
    SimpleCalculator calculator;
    int choice;

    cout << "--------Simple Calculator---------" << endl;
    cout << "Select operation: " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "----------------------------------" << endl;

    while (true) {
        cout << "Enter choice are -> [1-5]: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the calculator. GoodBye..!" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> calculator.num1;
        cout << "Enter second number: ";
        cin >> calculator.num2;

        switch (choice) {
            case 1:
                cout << calculator.num1 << " + " << calculator.num2 << " = " << calculator.add() << endl;
                break;
            case 2:
                cout << calculator.num1 << " - " << calculator.num2 << " = " << calculator.subtract() << endl;
                break;
            case 3:
                cout << calculator.num1 << " * " << calculator.num2 << " = " << calculator.multiply() << endl;
                break;
            case 4:
                cout << calculator.num1 << " / " << calculator.num2 << " = " << calculator.divide() << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid operation." << endl;
        }
    }

    return 0;
}
