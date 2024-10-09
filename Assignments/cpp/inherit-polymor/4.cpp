#include <iostream>
using namespace std;

// Base class for student personal details
class PersonalDetails{
protected:
    string name;
    int rollNo;

public:
    // Function to input student's personal details
    void inputPersonalDetails(){
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};

// Base class for student marks
class MarksDetails{
protected:
    int marks1, marks2, marks3;

public:
    // Function to input student's marks
    void inputMarks(){
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;
    }
};

// Derived class that inherits from both PersonalDetails and MarksDetails
class StudentMarkSheet : public PersonalDetails, public MarksDetails{
public:
    // Function to display the student's mark sheet
    void displayMarkSheet(){
        cout << "\n--- Student Mark Sheet ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
        int totalMarks = marks1 + marks2 + marks3;
        float percentage = (totalMarks / 3.0);
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    StudentMarkSheet s;  // Create an object of derived class
    s.inputPersonalDetails();  // Get student's personal details
    s.inputMarks();  // Get student's marks
    s.displayMarkSheet();  // Display the mark sheet

}
