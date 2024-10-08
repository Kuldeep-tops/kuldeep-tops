#include <iostream>
using namespace std;

class Date{
private:
    int day, month, year;

public:
    // Function to set the date
    void setdate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;

        // Validate the date
        if (!isvaliddate()) {
            cout << "Invalid date entered! Please try again." << endl;
            setdate(); // Re-prompt the user if the date is invalid
        }
    }

    // Function to get the day, month, and year (individual getters can also be made)
    void displaydate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    // Function to check if the date is valid
    bool isvaliddate() {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        }

        // Check the number of days in the given month
        int daysinmonth = getdaysinmonth(month, year);
        return day <= daysinmonth;
    }

    // Helper function to get the number of days in a month
    int getdaysinmonth(int month, int year){
        switch (month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                if (isleapyear(year))
                    return 29;
                else
                    return 28;
            default:
                return 0;
        }
    }

    // Function to check if a year is a leap year
    bool isleapyear(int year){
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main(){
    Date da;

    // Get the date from the user
    da.setdate();

    // Display the entered date
    da.displaydate();
}
