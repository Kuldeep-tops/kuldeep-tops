/*Performance-Based Salary Calculation:

Rating 5: 20% salary increase.
Rating 4: 10% salary increase.
Rating 3: 5% salary increase.
Rating 2: 2% salary increase.
Rating 1: No salary increase.
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeid;
    double salary;

public:
    // Constructor to get employee details from the user
    Employee() {
        cout << "Enter employee's name: ";
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> employeeid;
        cout << "Enter base salary: ";
        cin >> salary;
    }

    // Function to calculate salary based on performance rating
    void setsalarybaseperform(int performrate) {
        // Salary increase based on performance rating (1 - 5)
        switch (performrate) {
            case 5:
                salary += salary * 0.20;  // 20% increase for excellent performance
                break;
            case 4:
                salary += salary * 0.10;  // 10% increase for very good performance
                break;
            case 3:
                salary += salary * 0.05;  // 5% increase for good performance
                break;
            case 2:
                salary += salary * 0.02;  // 2% increase for average performance
                break;
            case 1:
                // No increase for poor performance
                cout << "No salary increase for poor performance." << endl;
                break;
            default:
                cout << "Invalid performance rating. No salary adjustment." << endl;
                break;
        }
    }

    // Function to display employee details
    void displayemployeedetails() {
        cout << "\nEmployee's Information:\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeid << endl;
        cout << "Salary: Rs" << salary << endl;
    }
};

int main() {
    // Create Employee object and get details using constructor 
    Employee emp;

    int performrate;

    // Get performance rating from user 
    cout << "Enter employee performance rating (1-5): ";
    cin >> performrate;

    // Set salary based on performance rating
    emp.setsalarybaseperform(performrate);

    // Display employee details
    emp.displayemployeedetails();

}
