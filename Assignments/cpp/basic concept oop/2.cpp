#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to initialize the bank account
    BankAccount(std::string name, std::string number, std::string type, double initialBalance)
        : depositorName(name), accountNumber(number), accountType(type), balance(initialBalance) {}

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << ". New Balance: $" << balance << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                std::cout << "Withdrew: $" << amount << ". New Balance: $" << balance << std::endl;
            } else {
                std::cout << "Insufficient funds for this withdrawal." << std::endl;
            }
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    // Method to check the balance
    void checkBalance() const {
        std::cout << "Current Balance: $" << balance << std::endl;
    }

    // Method to display account details
    void displayAccountDetails() const {
        std::cout << "Account Holder: " << depositorName << std::endl
                  << "Account Number: " << accountNumber << std::endl
                  << "Account Type: " << accountType << std::endl
                  << "Balance: $" << balance << std::endl;
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
