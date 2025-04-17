#include <iostream>
#include <ctime>
using namespace std;
class Transaction{
private:
    int transactionID; 
    double amount;     
    int timestamp;
    string type;  
public:        
    Transaction(int id, double amt, string dt, string tp) {
        transactionID = id;
        amount = amt;
        timestamp = static_cast<int>(time(0)); 
        type = tp;
    }

    void logTransaction()  { // design transaction format
        cout << "Transaction ID: " << transactionID << "\n"
                  << "Amount: $" << amount << "\n"
                  << "Date: " << date << "\n"
                  << "Type: " << type << "\n";
    }

    int getTransactionID()  {
         return transactionID;
     }
    double getAmount()  { 
        return amount; 
    }
    string getDate()  { 
        return date;
    }
    string getType()  {
         return type; 
        }
    
    void setTransactionID(int id)  {    
        transactionID = id; 
    }   
    void setAmount(double amt)  {    
        amount = amt; 
    }
    void setDate(string dt)  {    
        date = dt; 
    }
    void setType(string tp)  {    
        type = tp; 
    }
    
    void printHistory()  { // design transaction history format
        cout << "Transaction History:\n";
        cout << "ID: " << transactionID << ", Amount: $" << amount << ", Date: " << date << ", Type: " << type << "\n";
    }
};
