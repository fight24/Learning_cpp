#include <iostream>
#include <string>

using namespace std;

class Account 
{
private:
    //* attribules
    string name;
    double balance;
public:
    //* methods
    //* declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    //* methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}
string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    //* if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Account ai_acc;
    ai_acc.set_name("AI's account");
    ai_acc.set_balance(1000.0);
    
    if(ai_acc.deposit(200.0))
        cout << "Deposit OKE" << endl;
    else
        cout << "Deposit Not allowed" << endl;

    if(ai_acc.withdraw(500.0))
        cout << "Withdrawal OKE" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    if(ai_acc.withdraw(1500.0))
        cout << "Withdrawal OKE" << endl;
    else
        cout << "Not sufficient funds" << endl;
    return 0;
}