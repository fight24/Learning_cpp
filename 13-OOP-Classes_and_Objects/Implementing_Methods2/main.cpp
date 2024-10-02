#include <iostream>
#include "Account.cpp"
using namespace std;

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