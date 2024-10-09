#include <iostream>
using namespace std;

class AreaCalculate{
public:
    // Function to calculate the area of a circle
    double area(double radius){
        const double PI = 3.14;
        return PI * radius * radius; // Area = pi * r^2
    }

    // Function to calculate the area of a rectangle
    double area(double length, double width){
        return length * width; // Area = length * width
    }

    // Function to calculate the area of a triangle
    double area(double base, double height, bool isTriangle){
        return 0.5 * base * height; // Area = 1/2 * base * height
    }
};

int main(){
    AreaCalculate cal;
    double radius, length, width, base, height;

    // Calculate area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the Circle: " << cal.area(radius) << endl;

    // Calculate area of a rectangle
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the Rectangle: " << cal.area(length, width) << endl;

    // Calculate area of a triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the Triangle: " << cal.area(base, height, true) << endl;
}
