#include <iostream>
using namespace std;

// Base class Person
class Person{
protected:
    string name;
    int age;

public:
    // Function to input person details
    void inputPersonData(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    // Function to display person details
    void displayPersonData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student from Person
class Student : public Person{
protected:
    float percentage;

public:
    // Function to input student details
    void inputStudentData(){
        inputPersonData();  // Call base class function
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    // Function to display student details
    void displayStudentData(){
        displayPersonData();  // Call base class function
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class Teacher from Person
class Teacher : public Person{
protected:
    float salary;

public:
    // Function to input teacher details
    void inputTeacherData(){
        inputPersonData();  // Call base class function
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display teacher details
    void displayTeacherData(){
        displayPersonData();  // Call base class function
        cout << "Salary: Rs" << salary << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "--- Input Student Data ---\n";
    s.inputStudentData();

    cout << "\n--- Input Teacher Data ---\n";
    t.inputTeacherData();

    cout << "\n--- Student Information ---\n";
    s.displayStudentData();

    cout << "\n--- Teacher Information ---\n";
    t.displayTeacherData();
}
