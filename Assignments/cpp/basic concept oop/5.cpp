#include <iostream>
using namespace std;

class Rectangle {
	
private:
    double length;
    double width;

public:
    // Function to get values from the user
    void getInput() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;  // Area = length * width
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);  // Perimeter = 2 * (length + width)
    }

    // Function to display the area and perimeter
    void display() {
        cout << "Area of rectangle: " << calculateArea() << endl;
        cout << "Perimeter of rectangle: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect;

    // Get input from the user
    rect.getInput();

    // Display the area and perimeter of the rectangle
    rect.display();

    return 0;
}
