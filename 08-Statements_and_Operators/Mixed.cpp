// Mixed Type Expressions
/* 
    * Ask the user to enter 3 integers
    * Calculate the sum of the integers then
    * calculate the average of the 3 integers.
    * Display the 3 integers entered
    * the sum of the 3 integers and
    * the average of the 3 integers.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum {0};
    double average {0.0};
    cin >> a >> b >> c;
    sum = a + b + c;
    average = sum / 3;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    average = static_cast <double> (sum) / 3;
    cout << "Average: " << average << endl;
    return 0;
}