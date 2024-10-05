#include <iostream>
#include <string>
using namespace std;

// Class to represent lecture details
class Lecture {
    // Private data members
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize default values
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLectures = 0;
    }

    // Function to assign initial values via user input
    void setLectureDetails() {
        cout << "Enter Lecturer's Name: ";
        getline(cin, lecturerName);
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        cin.ignore(); // To clear input buffer after reading number of lectures
        
    }

    // Function to display lecture details
    void displayLectureDetails() const {
        cout << "\nLecturer's Name: " << lecturerName
             << "\nSubject Name: " << subjectName
             << "\nCourse Name: " << courseName
             << "\nNumber of Lectures: " << numberOfLectures << endl;
    }
};

int main() {
    const int MAX_LECTURERS = 4;  // Maximum number of lecturers
    Lecture lecturers[MAX_LECTURERS];  // Array to store lecturer details

    cout << "-------- Welcome to the Lecture Management System -------\n";

    // Loop to input and store details of 5 lecturers
    for (int i = 0; i < MAX_LECTURERS; i++) {
        cout << "\nEnter details for Lecturer " << (i + 1) << ":\n";
        lecturers[i].setLectureDetails();  // Assigning lecture details
    }

    // Display the details of all lecturers
    cout << "\n--- Displaying Lecture Details ---\n";
    for (int i = 0; i < MAX_LECTURERS; i++) {
        cout << "\nDetails of Lecturer " << (i + 1) << ":\n";
        lecturers[i].displayLectureDetails();  // Displaying details
    }

    return 0;
}
