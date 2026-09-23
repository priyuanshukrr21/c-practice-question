#include <iostream>
using namespace std;

struct Account {
    int accountNo;
    string name;
    double balance;
};

int main() {
    Account acc[3];
    int n, choice, searchAccount;
    double amount;

    cout << "Enter number of accounts: ";
    cin >> n;

    // Store account data
    for (int i = 0; i < n; i++) {
        cout << "\nAccount " << i + 1 << endl;

        cout << "Account Number: ";
        cin >> acc[i].accountNo;

        cout << "Name: ";
        cin >> acc[i].name;

        cout << "Initial Balance: ";
        cin >> acc[i].balance;
    }

    cout << "\n===== BANK MENU =====\n";
    cout << "1. Display Accounts\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Search Account\n";
    cout << "Enter Choice: ";
    cin >> choice;

    cout << "\nEnter Account Number : ";
    cin >> searchAccount;

    int index = -1;

    // Search account
    for (int i = 0; i < n; i++) {
        if (acc[i].accountNo == searchAccount) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Account Not Found!";
    }
    else if (choice == 1) {
        cout << "\nName: " << acc[index].name;
        cout << "\nBalance: " << acc[index].balance;
    }
    else if (choice == 2) {
        cout << "Enter deposit amount: ";
        cin >> amount;

        if (amount > 0) {
            acc[index].balance += amount;
            cout << "Deposit Successful!";
            cout << "\nNew Balance: " << acc[index].balance;
        }
        else {
            cout << "Invalid Amount!";
        }
    }
    else if (choice == 3) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount > 0 && amount <= acc[index].balance) {
            acc[index].balance -= amount;
            cout << "Withdrawal Successful!";
            cout << "\nRemaining Balance: " << acc[index].balance;
        }
        else {
            cout << "Insufficient Balance or Invalid Amount!";
        }
    }
    else if (choice == 4) {
        cout << "\nAccount Found!";
        cout << "\nName: " << acc[index].name;
        cout << "\nBalance: " << acc[index].balance;
    }
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}