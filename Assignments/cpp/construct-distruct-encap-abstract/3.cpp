#include <iostream>
#include <string>
using namespace std;

class Car{
	
private:
    string company;
    string model;
    int year;

public:
    // Function to set the values of company, model, and year
    void setcardetails() {
        cout << "Enter car company name: ";
        getline(cin, company);
        
        cout << "Enter car model: ";
        getline(cin, model);
        
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    // Function to display the car details
    void displaycardetails() {
        cout << "\nCar Details:\n";
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c;

    // Set car details from the user
    c.setcardetails();

    // Display the car details
    c.displaycardetails();

    //return 0;
}
