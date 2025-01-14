#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0.0;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited Rs." << amount << "." << endl;
        } else {
            cout << "Invalid amount! Please enter a positive value." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid amount! Please enter a positive value." << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew Rs." << amount << "." << endl;
        }
    }

    // Function to check balance
    void checkBalance() const {
        cout << "Your current balance is Rs." << balance << "." << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    cout << "Welcome to the Simple Banking System!" << endl;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the amount to deposit: Rs.";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter the amount to withdraw: Rs.";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.checkBalance();
            break;
        case 4:
            cout << "Thank you for using the Simple Banking System. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }
}
