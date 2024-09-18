//  !Challenge 
/*
	* For this program I will be using US dollars and cents.
	
    * Write a program that asks the user to enter the following:
	* An integer representing the number of cents 
    	
	* You may assume that the number of cents entered is greater than or equal to zero
    
	* The program should then display how to provide that change to the user.
	
	!In the US:
	!	1 dollar is 100 cents
	!	1 quarter is 25 cents
	!	1 dime is 10 cents
	!	1 nickel is 5 cents, and
	!	1 penny is 1 cent.
		
	* Here is a sample run:
	
	* Enter an amount in cents :  92
	
	* You can provide this change as follows:
	* dollars    : 0
	* quarters : 3
	* dimes     : 1
	* nickels   : 1
	* pennies  : 2
	
	! Have fun and test your program!!

*/
#include <iostream>
using namespace std;
int main()
{
    const int ONE_DOLLAR {100}, ONE_QUARTER {25}, ONE_DIME {10}, ONE_NICKEL {5}, ONE_PENNY {1};
    int input_cents {0}, dollars, quarters, dimes, nickels, pennies;
    cout << "Enter an amount in cents: ";
    cin >> input_cents;
    dollars = input_cents / ONE_DOLLAR;
    input_cents %= ONE_DOLLAR;
    quarters = input_cents / ONE_QUARTER;
    input_cents %= ONE_QUARTER;
    dimes = input_cents/ ONE_DIME;
    input_cents %= ONE_DIME;
    nickels = input_cents / ONE_NICKEL;
    input_cents %= ONE_NICKEL;
    pennies = input_cents;
    cout << "Dollars: " << dollars << endl
         << "Quarters: " << quarters << endl
         << "Dimes: " << dimes << endl
         << "Nickels: " << nickels << endl
         << "Pennies: " << pennies << endl;
    return 0;
}