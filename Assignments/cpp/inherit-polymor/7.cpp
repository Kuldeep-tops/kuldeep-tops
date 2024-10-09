#include <iostream>
using namespace std;

// Base class
class Person{
protected:
    string name;
    int age;

public:
    // Constructor to initialize Person details
    Person(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    // Function to display Person details
    void displayPerson(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Intermediate class inheriting from Person
class Student : public Person{
protected:
    int rollNo;

public:
    // Constructor to initialize Student details
    Student(){
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    // Function to display Student details
    void displayStudent(){
        displayPerson();  // Call base class function
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class inheriting from Student
class Result : public Student{
private:
    float marks1, marks2;

public:
    // Constructor to initialize Result details
    Result(){
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
    }

    // Function to display Result details
    void displayResult(){
        displayStudent();  // Call intermediate class function
        float total = marks1 + marks2;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main(){
    // Create an object of the Result class
    Result re;

    // Display all the details
    cout << "\n--- Student Result Details ---\n";
    re.displayResult();

}
