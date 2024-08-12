#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Account class to represent a bank account
class Account {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account details
    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Method to check account balance
    double getBalance() const {
        return balance;
    }

    // Method to get account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Method to display account details
    void displayAccountInfo() const {
        cout << "Account Number: " << accountNumber << "\nBalance: $" << balance << endl;
    }
};

// Customer class to represent a bank customer
class Customer {
private:
    string name;
    vector<Account> accounts;

public:
    // Constructor to initialize customer details
    Customer(const string& customerName) : name(customerName) {}

    // Method to add an account to the customer
    void addAccount(const Account& account) {
        accounts.push_back(account);
        cout << "Account added successfully for " << name << "." << endl;
    }

    // Method to display all accounts of the customer
    void displayAccounts() const {
        cout << "Customer: " << name << endl;
        for (const auto& account : accounts) {
            account.displayAccountInfo();
            cout << "-----------------------------" << endl;
        }
    }

    // Method to find an account by account number
    Account* findAccount(int accountNumber) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                return &account;
            }
        }
        return nullptr;
    }
};

// Bank class to manage all customers and their accounts
class Bank {
private:
    vector<Customer> customers;

public:
    // Method to add a new customer to the bank
    void addCustomer(const string& customerName) {
        customers.emplace_back(customerName);
        cout << "Customer " << customerName << " added successfully." << endl;
    }

    // Method to add an account to a specific customer
    void addAccountToCustomer(const string& customerName, int accountNumber, double initialBalance) {
        for (auto& customer : customers) {
            if (customerName == customerName) {
                customer.addAccount(Account(accountNumber, initialBalance));
                return;
            }
        }
        cout << "Customer not found!" << endl;
    }

    // Method to display details of all customers and their accounts
    void displayAllCustomers() const {
        for (const auto& customer : customers) {
            customer.displayAccounts();
        }
    }

    // Method to perform a transaction on a specific account
    void performTransaction(const string& customerName, int accountNumber, double amount, bool isDeposit) {
        for (auto& customer : customers) {
            if (customerName == customerName) {
                Account* account = customer.findAccount(accountNumber);
                if (account) {
                    if (isDeposit) {
                        account->deposit(amount);
                    } else {
                        account->withdraw(amount);
                    }
                    return;
                } else {
                    cout << "Account not found!" << endl;
                    return;
                }
            }
        }
        cout << "Customer not found!" << endl;
    }
};

int main() {
    Bank bank;

    // Adding customers to the bank
    bank.addCustomer("Chiranjeev");
    bank.addCustomer("Kamal");

    // Adding accounts to customers
    bank.addAccountToCustomer("Chiranjeev", 1001, 500.0);
    bank.addAccountToCustomer("Chiranjeev", 1002, 1000.0);
    bank.addAccountToCustomer("Kamal", 1003, 1500.0);

    // Display all customers and their accounts
    cout << "\nAll Customer Accounts:\n";
    bank.displayAllCustomers();

    // Perform a deposit transaction
    cout << "\nPerforming a deposit transaction:\n";
    bank.performTransaction("Chiranjeev", 1001, 200.0, true);

    // Perform a withdrawal transaction
    cout << "\nPerforming a withdrawal transaction:\n";
    bank.performTransaction("Kamal", 1003, 300.0, false);

    // Display updated accounts
    cout << "\nUpdated Customer Accounts:\n";
    bank.displayAllCustomers();

    return 0;
}

