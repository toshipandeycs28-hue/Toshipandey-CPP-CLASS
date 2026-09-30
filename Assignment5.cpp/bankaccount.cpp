#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    BankAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    void display() {
        cout << "Bank Account Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Deposited: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount account("123456789", "Toshi", 10000);

    account.display();

    cout << endl;

    account.deposit(5000);

    cout << endl;

    account.withdraw(3000);

    return 0;
}