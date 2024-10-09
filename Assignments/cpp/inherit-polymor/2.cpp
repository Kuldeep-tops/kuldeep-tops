#include <iostream>
using namespace std;

// Base class to store dimensions of the rectangle
class Rectangle{
protected:
    float length;
    float width;

public:
    // Function to input rectangle dimensions
    void inputdata(){
        cout << "Enter Length of the Rectangle: ";
        cin >> length;
        cout << "Enter Breadth of the Rectangle: ";
        cin >> width;
    }
};
// Derived class to calculate and display the area
class Rectarea : public Rectangle{
public:
    // Function to calculate and display the area of the rectangle
    void displayarea(){
        float area = length * width;
        cout << "The Area of the Rectangle is: " << area << endl;
    }
};

int main(){
    Rectarea rect;   // Create an object of derived class
    rect.inputdata();  // Get dimensions from user
    rect.displayarea();  // Calculate and display the area
    
}
