#include <iostream>
using namespace std;

class Cal{
private:
    double num1, num2;

public:
    // Constructor to get values from the user
    Cal(double a, double b){
        num1 = a;
        num2 = b;
    }

    // Function to perform addition
    double add(){
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract(){
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply(){
        return num1 * num2;
    }

    // Function to perform division
    double divide(){
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;

    // Get input from the user
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Create a Calculator object with user inputs
    Cal cl(a, b);

    // Perform and display all operations
    cout << "Addition: " << cl.add() << endl;
    cout << "Subtraction: " << cl.subtract() << endl;
    cout << "Multiplication: " << cl.multiply() << endl;
    cout << "Division: " << cl.divide() << endl;

    return 0;
}
