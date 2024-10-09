#include <iostream>
using namespace std;

//class MaxFinder; // Forward declaration of class

class Number{
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int val = 0) : value(val){}

    // Friend function to find the maximum of two Number objects
    friend int findMax(Number num1, Number num2);

    // Function to display the number
    void display() const{
        cout << value;
    }
};

// Friend function to find the maximum of two numbers
int findMax(Number num1, Number num2){
    return (num1.value > num2.value) ? num1.value : num2.value; // Return the maximum value
}

int main(){
    int a, b;

    // Get user input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number n1(a), n2(b); // Create Number objects

    // Find and display the maximum number
    int maxNumber = findMax(n1, n2);
    cout << "The maximum number is: " << maxNumber << endl;
}
