#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set the values of name, age, and country
    void setValues() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your age: ";
        cin >> age;
        cin.ignore(); // To consume the newline left by cin
        cout << "Enter your country: ";
        getline(cin, country);
    }

    // Function to get and display the values of name, age, and country
    void displayValues() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Person person;

    // Set values from the user
    person.setValues();

    // Display the values
    person.displayValues();

    return 0;
}
