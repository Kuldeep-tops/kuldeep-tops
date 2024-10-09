#include <iostream>
using namespace std;

// Base class Students
class Students{
protected:
    int rollNo;

public:
    // Function to input roll number
    void inputRollNo(){
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    // Function to display roll number
    void displayRollNo(){
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class Test from Students
class Test : public Students{
protected:
    float marks1, marks2;

public:
    // Function to input marks for two subjects
    void inputMarks(){
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
    }

    // Function to display marks
    void displayMarks(){
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

// Derived class Result from Test
class Result : public Test{
private:
    float totalMarks;

public:
    // Function to calculate total marks
    void calculateTotalMarks(){
        totalMarks = marks1 + marks2;
    }

    // Function to display the result (roll number, marks, total)
    void displayResult(){
        displayRollNo();  // Call function from Students class
        displayMarks();   // Call function from Test class
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main(){
    Result rs;  // Create an object of Result class

    // Get student data
    rs.inputRollNo();
    rs.inputMarks();
    
    // Calculate total and display the result
    rs.calculateTotalMarks();
    cout << "\n--- Student Result ---\n";
    rs.displayResult();
}
