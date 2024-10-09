#include <iostream>
using namespace std;

//class SwapNumbers; // Forward declaration

// Class definition
class Number{
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int val = 0) : value(val){}

    // Friend function to swap two Number objects
    friend void swap(Number& num1, Number& num2);

    // Function to display the number
    void display() const{
        cout << value;
    }
};

// Friend function to swap two numbers
void swap(Number& num1, Number& num2){
    num1.value = num1.value + num2.value; // Step 1: Add both numbers
    num2.value = num1.value - num2.value; // Step 2: Subtract the new num2 from the sum to get the original num1
    num1.value = num1.value - num2.value; // Step 3: Subtract the new num2 from the sum to get the original num2
}

int main(){
    int a, b;

    // Get user input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number n1(a), n2(b); // Create Number objects

    cout << "Before swapping: " << endl;
    cout << "First number: ";
    n1.display();
    cout << endl;

    cout << "Second number: ";
    n2.display();
    cout << endl;

    // Swap the numbers
    swap(n1, n2);

    cout << "After swapping: " << endl;
    cout << "First number: ";
    n1.display();
    cout << endl;

    cout << "Second number: ";
    n2.display();
    cout << endl;
}
