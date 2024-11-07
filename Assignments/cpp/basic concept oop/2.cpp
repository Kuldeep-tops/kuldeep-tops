#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the bank account
    
    BankAccount(string name, string number, string type, double initialBalance)
        : depositorName(name), accountNumber(number), accountType(type), balance(initialBalance){}

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs" << amount << ". New Balance: Rs" << balance <<endl;
        } else {
            cout << "Deposit amount must be positive." <<endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrew: Rs" << amount << ". New Balance: Rs" << balance <<endl;
            } else {
                cout << "Insufficient funds for this withdrawal." <<endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." <<endl;
        }
    }

    // Method to check the balance
    void checkBalance() const {
        cout<< "Current Balance: Rs" << balance <<endl;
    }

    // Method to display account details
    void displayAccountDetails() const {
        cout << "Account Holder: " << depositorName <<endl
                  << "Account Number: " << accountNumber <<endl
                  << "Account Type: " << accountType <<endl
                  << "Balance: $" << balance <<endl;
    }
};

int main() {
    // Creating an instance of BankAccount
    BankAccount account("John Doe", "123456789", "Savings", 1000.0);

    // Displaying account details
    account.displayAccountDetails();

    // Performing some transactions
    account.deposit(500);
    account.withdraw(200);
    account.checkBalance();

    return 0;
}
