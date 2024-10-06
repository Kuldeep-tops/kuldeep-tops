#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Function to assign values to account details
    void assignValues(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Function to display the name of the depositor and balance
    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account; // Creating an object of BankAccount
    string name;
    int accNumber;
    string accType;
    double initialBalance;

    // Assign values to the account
    cout << "Enter the depositor's name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNumber;

    cout << "Enter account type (Savings/Current): ";
    cin >> accType;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    account.assignValues(name, accNumber, accType, initialBalance);

    // Deposit and Withdraw
    account.deposit(500);  // Depositing 500
    account.withdraw(200); // Withdrawing 200

    // Display account details
    account.display();

    return 0;
}