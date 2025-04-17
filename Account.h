#include <iostream> 
using namespace std;
class Account
{
private:
    string name;
    int id;
    string password;
public:
    Account();
    Account(string &n, string& pass){
        name = n;
        password = pass;
    };
    void setUser(string name){
        name=name;
    }
    void setId(int id){
        id=id;
    }
    void setName(string name){
        name=name;
    }
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }
    void setPassword(string pass){
        password=pass;
    }
    string getPassword(){
        return password;
    }
    void displayAccountInfo(){
        cout << "Account Name: " << name << endl;
        cout << "Account ID: " << id << endl;
        cout << "Password: " << password << endl;
    }
};
