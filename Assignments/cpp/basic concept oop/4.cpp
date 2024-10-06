#include <iostream> 
//const pi = 3.14 
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Function to calculate the area of the circle
    double calculateArea() {
        return 3.14 * radius * radius;  // Area = pi * r²
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() {
        return 2 * 3.14 * radius;  // Circumference = 2 * pi * r
    }

    // Function to display the radius, area, and circumference
    void display() {
        cout << "enter radious " << endl;
        cin>>radius;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() {
    // Create a Circle object with a specific radius
    Circle circle(5.0);
    //Circle c;

    // Display the circle's radius, area, and circumference
    circle.display();

    return 0;
}
