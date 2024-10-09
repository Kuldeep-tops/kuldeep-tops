#include <iostream>
using namespace std;

// Base class
class Cricketer{
public:
    string name;
    int matches;

    // Function to input basic cricketer data
    void inputCricketerData(){
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Number of Matches: ";
        cin >> matches;
    }

    // Function to display cricketer data
    void displayCricketerData(){
        cout << "Cricketer Name: " << name << endl;
        cout << "Matches Played: " << matches << endl;
    }
};

// Derived class
class Batsman : public Cricketer{
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    // Function to input batsman data
    void inputBatsmanData(){
        inputCricketerData();  // Call base class function to input cricketer data
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance: ";
        cin >> bestPerformance;

        // Calculate the average runs
        calculateAverageRuns();
    }

    // Function to calculate average runs
    void calculateAverageRuns(){
        if (matches != 0)
            averageRuns = static_cast<float>(totalRuns) / matches;
        else
            averageRuns = 0;
    }

    // Function to display batsman data
    void displayBatsmanData(){
        displayCricketerData();  // Call base class function to display cricketer data
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main(){
    Batsman b;
    b.inputBatsmanData();
    b.displayBatsmanData();
    
}
