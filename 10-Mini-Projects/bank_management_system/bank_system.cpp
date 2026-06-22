#include <iostream>
#include <string>
using namespace std;

class Account
{
    private:
        int accId;
        string name;
        double balance;
    
    public:
        Account(int id = 0, string n = "", double b = 0.0);
        void deposit(double amount);
        bool withdraw(double amount);
        void display();
        double getBalance();
        int getAccId();
};

Account::Account(int id, string n, double b) : accId(id), name(n), balance(b) {}

void Account::deposit(double amount)
{
    if(amount > 0) { balance += amount; cout << "Deposit successful" << endl; }
    else cout << "Invalid amount" << endl;
}

bool Account::withdraw(double amount)
{
    if(amount > 0 && amount <= balance) 
    { 
        balance -= amount; 
        cout << "Withdrawal successful" << endl;
        return true;
    }
    cout << "Insufficient balance" << endl;
    return false;
}

void Account::display()
{
    cout << "ID: " << accId << ", Name: " << name << ", Balance: " << balance << endl;
}

double Account::getBalance() { return balance; }
int Account::getAccId() { return accId; }

int main()
{
    Account acc1(101, "Alice", 5000);
    Account acc2(102, "Bob", 3000);
    
    cout << "=== Bank Management System ===" << endl;
    
    acc1.display();
    acc2.display();
    
    cout << "\n--- Account 1 Operations ---" << endl;
    acc1.deposit(1000);
    acc1.display();
    
    acc1.withdraw(2000);
    acc1.display();
    
    cout << "\n--- Invalid Operations ---" << endl;
    acc1.withdraw(10000);
    acc2.withdraw(5000);
    
    return 0;
}

/* Description: Bank Management System with Account class supporting deposit,
   withdraw, display balance, and validation operations. */
