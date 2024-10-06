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
    // Constructor to initialize account details
    BankAccount(string name, int accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "Account Holder Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: Rs" << balance << endl;
    }

    // Function to deposit amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs" << amount << ". New Balance: Rs" << balance << endl;
        } else {
            cout << "Invalid amount for deposit!" << endl;
        }
    }

    // Function to withdraw amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew Rs" << amount << ". Remaining Balance: Rs" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
};

int main() {
    // Create a new bank account object
    BankAccount account("Kuldeep prakash chavhan", 123456483960, "Saving", 50000.0);

    // Display account details
    account.displayAccountDetails();

    // Deposit money
    account.deposit(1500.0);

    // Withdraw money
    account.withdraw(2000.0);

    return 0;
}
