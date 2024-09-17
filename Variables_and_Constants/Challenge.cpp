    /*************************************
     * Declaring and Using Constants.
    ***************************************/
     /* 
     Frank's Carpet Cleaning Service 
     Charges $30 per room
     Sales tax rate is 6%
     Estimates are valid for 30 days

     Prompt the user for the number of rooms they would like cleaned
     and provide an estimate such as:
          
     Estimate for carpet cleaning service:
     Number of rooms: 2
     Price per room: $30
     Cost: $60
     Tax: $3.6
     ====================================
     Total estimate: $63.6
     This estimate is valid for 30 days

     Pseudocode:
     Prompt the user to enter the number of rooms
     Display number of rooms
     Display price per room
     
     Display cost:  (number of rooms * price per room)
     Display tax:   number of rooms * price per room * tax rate
     Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
     Display estimate expiration time
     */
    /* 
        Frank's Carpet Cleaning Service
        Charges:
            $25 per small room
            $35 per large room
        Sales tax rate is 6%
        Estimates are valid for 30 days

        Prompt the user for the number of small and large rooms they would like cleaned
        and provide an estimate such as:
        
    Estimate for carpet cleaning service
    Number of small rooms: 3
    Number of large rooms: 1
    Price per small room: $25
    Price per large room: $35
    Cost : $110
    Tax: $6.6
    ===============================
    Total estimate: $116.6
    This estimate is valid for 30 days
    */
#include <iostream>
using namespace std;
const double PRICE_PER_SMALL_ROOM {25.0};
const double PRICE_PER_LARGE_ROOM {35.0};
const double TAX_RATE {0.06};
const int estimate_expiry {30}; // days
int main(){
    int num_of_small_rooms {0}, num_of_large_rooms {0};
    double cost, tax;
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n"
         << "How many small rooms would you like cleaned? ";
    cin >> num_of_small_rooms;
    cout << "\nHow many large rooms would you like cleaned? ";
    cin >> num_of_large_rooms;
    cost = num_of_small_rooms*PRICE_PER_SMALL_ROOM + num_of_large_rooms*PRICE_PER_LARGE_ROOM;
    tax = num_of_small_rooms*PRICE_PER_SMALL_ROOM*TAX_RATE + num_of_large_rooms*PRICE_PER_LARGE_ROOM*TAX_RATE;
    cout <<"\n===================+================\n"
         << "Estimate for carpet cleaning service:\n"
         << "Number of small rooms: " << num_of_small_rooms << endl
         << "Number of large rooms: " << num_of_large_rooms << endl
         << "Price per small room: $" << PRICE_PER_SMALL_ROOM << endl
         << "Price per large room: $" << PRICE_PER_LARGE_ROOM << endl
         << "Cost: $" << cost << endl
         << "Tax: $" << tax << endl
         << "====================================\n"
         << "Total estimate: $" << cost + tax << endl
         << "This estimate is valid for " << estimate_expiry << " days" << endl;
    return 0;
}