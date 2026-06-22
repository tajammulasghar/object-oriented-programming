#include <iostream>
using namespace std;

class BankAccount
{
    private:
        double balance;

    public:
        BankAccount(double b = 0.0) : balance(b) {}
        void deposit(double a) { balance += a; }
        bool withdraw(double a) { if (a <= balance) { balance -= a; return true; } return false; }
        double getBalance() { return balance; }
};

int main()
{
    BankAccount acc(1000);
    acc.deposit(200);
    acc.withdraw(150);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}

/* Description: `BankAccount` uses private `balance` with `deposit`, `withdraw`,
   and a getter to demonstrate encapsulation and controlled access. */
