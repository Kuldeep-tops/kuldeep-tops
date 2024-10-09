#include <iostream>
using namespace std;

class Calculate{
public:
    // Function to add two integers
    int operate(int a, int b){
        return a + b;
    }

    // Function to subtract two integers
    int operate(int a, int b, char op){
        if (op == '-') {
            return a - b;
        }
        return 0;
    }

    // Function to multiply two floating-point numbers
    float operate(float a, float b){
        return a * b;
    }

    // Function to divide two floating-point numbers
    float operate(float a, float b, char op){
        if (op == '/'){
            if (b != 0){
                return a / b;
            }else{
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        }
        return 0;
    }
};

int main() {
    Calculate cal;
    int intNum1, intNum2;
    float floatNum1, floatNum2;

    // Get input for integers (addition and subtraction)
    cout << "Enter two integers: ";
    cin >> intNum1 >> intNum2;

    // Perform and display addition
    cout << "Addition of " << intNum1 << " and " << intNum2 << " is: " << cal.operate(intNum1, intNum2) << endl;

    // Perform and display subtraction
    cout << "Subtraction of " << intNum1 << " and " << intNum2 << " is: " << cal.operate(intNum1, intNum2, '-') << endl;

    // Get input for floats (multiplication and division)
    cout << "Enter two floating-point numbers: ";
    cin >> floatNum1 >> floatNum2;

    // Perform and display multiplication
    cout << "Multiplication of " << floatNum1 << " and " << floatNum2 << " is: " << cal.operate(floatNum1, floatNum2) << endl;

    // Perform and display division
    cout << "Division of " << floatNum1 << " by " << floatNum2 << " is: " << cal.operate(floatNum1, floatNum2, '/') << endl;
}
