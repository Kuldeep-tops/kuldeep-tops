#include <iostream>
#include <cstring> // For strlen and strcpy
using namespace std;

class String{
private:
    char *str; // Pointer to hold the string

public:
    // Constructor to initialize the string
    String(const char *s = "") {
        str = new char[strlen(s) + 1]; // Allocate memory for the string
        strcpy(str, s); // Copy the input string
    }

    // Overload the + operator to concatenate two strings
    String operator+(const String& other) {
        String result; // Create a new String object for the result
        // Allocate memory for the concatenated string
        result.str = new char[strlen(str) + strlen(other.str) + 1];
        // Concatenate the strings
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result; // Return the result
    }

    // Function to display the string
    void display() const {
        cout << str;
    }

    // Destructor to free the dynamically allocated memory
    ~String() {
        delete[] str; // Free the allocated memory
    }
};

int main() {
    char input1[100], input2[100];

    // Get input for the first string
    cout << "Enter the first string: ";
    cin.getline(input1, 100);

    // Get input for the second string
    cout << "Enter the second string: ";
    cin.getline(input2, 100);

    // Create String objects for the input strings
    String str1(input1);
    String str2(input2);

    // Concatenate the two strings using the overloaded + operator
    String result = str1 + str2;

    // Display the concatenated result
    cout << "Concatenated String: ";
    result.display();
    cout << endl;
}
