#include <iostream>
using namespace std;

class Triangle{
private:
    float side1, side2, side3;

public:
    // Function to get the lengths of the triangle sides from the user
    void getsides(){
        cout << "Enter the length of side 1: ";
        cin >> side1;
        cout << "Enter the length of side 2: ";
        cin >> side2;
        cout << "Enter the length of side 3: ";
        cin >> side3;
    }

    // Function to determine the type of triangle
    void determinetriangletype(){
        if (side1 == side2 && side2 == side3){
            cout << "The triangle is equilateral." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3){
            cout << "The triangle is isosceles." << endl;
        } else{
            cout << "The triangle is scalene." << endl;
        }
    }

    // Function to display the sides of the triangle
    void displaysides(){
        cout << "\nThe sides of the triangle are:\n";
        cout << "Side 1: " << side1 << endl;
        cout << "Side 2: " << side2 << endl;
        cout << "Side 3: " << side3 << endl;
    }
};

int main(){
    Triangle tr;

    // Get the triangle sides from the user
    tr.getsides();

    // Display the sides of the triangle
    tr.displaysides();

    // Determine and display the type of the triangle
    tr.determinetriangletype();   
}
