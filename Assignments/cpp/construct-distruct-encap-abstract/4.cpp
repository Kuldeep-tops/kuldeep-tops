#include <iostream>
using namespace std;

class Bankaccount {
private:
    int accountnumber;
    float balance;
    string name;

public:
    // Function to initialize account details
    void setaccountdetails() {
        cout<<"Enter name: ";
        cin>>name;
        cout << "Enter account number: ";
        cin >> accountnumber;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Function to deposit money into the account
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
          //  cout<<"name: "<<name<<endl;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
          //  cout<<"name: "<<name<<endl;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid withdrawal amount." << endl;
        }
    }

    // Function to display account details
    void displayaccountdetails() {
       // cout<<"\nname: "<<name;
        cout << "\nAccount Number: " << accountnumber << endl;
        cout << "Current Balance: Rs" << balance << endl;
    }
};

int main() {
    Bankaccount ac;
    float amount;

    // Set account details from the user
    ac.setaccountdetails();

    // Display initial details
    ac.displayaccountdetails();

    // Deposit money
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    ac.deposit(amount);

    // Display updated account details
    ac.displayaccountdetails();

    // Withdraw money
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    ac.withdraw(amount);

    // Display final account details
    ac.displayaccountdetails();

   
}
