#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a; // Store the value of a in a temporary variable
    a = b;      // Assign the value of b to a
    b = temp;   // Assign the value of temp (original a) to b
}

int main() {
    int choice;
    cout << "Choose the type of values to swap:\n";
    cout << "1. Integer\n";
    cout << "2. Float\n";
    cout << "3. Double\n";
    cout << "4. Character\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Before swapping: a = " << a << ", b = " << b << endl;
            swapValues(a, b);
            cout << "After swapping: a = " << a << ", b = " << b << endl;
            break;
        }
        case 2: {
            float a, b;
            cout << "Enter two floats: ";
            cin >> a >> b;
            cout << "Before swapping: a = " << a << ", b = " << b << endl;
            swapValues(a, b);
            cout << "After swapping: a = " << a << ", b = " << b << endl;
            break;
        }
        case 3: {
            double a, b;
            cout << "Enter two doubles: ";
            cin >> a >> b;
            cout << "Before swapping: a = " << a << ", b = " << b << endl;
            swapValues(a, b);
            cout << "After swapping: a = " << a << ", b = " << b << endl;
            break;
        }
        case 4: {
            char a, b;
            cout << "Enter two characters: ";
            cin >> a >> b;
            cout << "Before swapping: a = " << a << ", b = " << b << endl;
            swapValues(a, b);
            cout << "After swapping: a = " << a << ", b = " << b << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

}
