#include<iostream>
#include "Account.h"
#include "Transaction.h"
#include "Customer.h"
#include<vector>

using namespace std;
class ATM
{ 
    private:
    double balance;
    string currentMode;
    Account* currentUser;
    vector<Account*> accounts;
    string adminPassword;
    int nextTransactionID;
    int nextAccountID;
    vector<Transaction*> transactions[100];
public:
    ATM();
    void setBalance(double b);
    double getBalance() const;  
    void setCurrentMode(string mode);
    string getCurrentMode() const;          
    void setCurrentUser(Account* user);
    Account* getCurrentUser() const;
    void setAdminPassword(string pass);
    string getAdminPassword() const;
    void setNextTransactionID(int id);
    int getNextTransactionID() const;
    void setNextAccountID(int id);  
    int getNextAccountID() const;
    void addAccount(Account* account);
    void removeAccount(Account* account);
    void displayAccounts() const;
    void displayAccountInfo(Account* account) const;
    void deposit(double amount);
    void withdraw(double amount);
    void transfer(double amount, Account* toAccount);
    void changePassword(string newPassword);
    bool authenticateCustomer(string password) const;
    bool authenticateAdmin(string password) const;
    void displayAccountDetails() const;
    void displayMainMenu() const;   
}