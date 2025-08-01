#include <iostream>
using namespace std;

class BankAccount
 {
private:
    float balance;  // private data member

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance = 0)
	 {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Invalid initial balance. Setting balance to 0.\n";
        }
    }

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Function to withdraw money
    void withdraw(float amount)
	 {
        if (amount > 0 && amount <= balance)
		 {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else
		 {
            cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    // Function to display balance
    void displayBalance()
	 {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount account(1000);  // Create account with initial balance

    account.displayBalance();

    account.deposit(500);       // Deposit money
    account.withdraw(300);      // Withdraw money
    account.withdraw(2000);     // Attempt invalid withdrawal

    account.displayBalance();   // Show final balance

    return 0;
}

