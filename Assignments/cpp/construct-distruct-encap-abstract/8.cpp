#include <iostream>
#include <string>
using namespace std;

// Address class (used in aggregation)
class Address{
public:
    string street;
    string city;
    string state;
    int zipcode;

    // Function to get address details from user
    void setaddress() {
        cout << "Enter street: ";
        getline(cin, street);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter state: ";
        getline(cin, state);
        cout << "Enter ZIP code: ";
        cin >> zipcode;
        cin.ignore();  // to ignore the newline character after entering the ZIP code
    }

    // Function to display address details
    void displayaddress() {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipcode << endl;
    }
};

// Student class
class Student{
private:
    string name;
    string studentclass;
    int rollnumber;
    float marks;
    Address ad;  // Aggregation of Address in Student class

public:
    // Function to get student details from the user
    void setstudentdetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter student's class: ";
        getline(cin, studentclass);
        cout << "Enter roll number: ";
        cin >> rollnumber;
        cout << "Enter marks (out of 100): ";
        cin >> marks;
        cin.ignore();  // to ignore the newline character after entering the marks
        ad.setaddress();  // Get address details
    }

    // Function to calculate the grade based on the marks
    char calculategrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    // Function to display student's details
    void displaystudentdetails() {
        cout << "\nStudent's Information:\n";
        cout << "Name: " << name << endl;
        cout << "Class: " << studentclass << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Marks: " << marks << "/100" << endl;
        cout << "Grade: " << calculategrade() << endl;
        ad.displayaddress();  // Display address details
    }
};

int main() {
    Student st;

    // Get student details from user
    st.setstudentdetails();

    // Display student details
    st.displaystudentdetails();
    
}
