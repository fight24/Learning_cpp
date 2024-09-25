//* Recursion - Fibonacci
#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
    {
        return 0; //* base case
    }
    return fibonacci(n-1) + fibonacci(n-2); //* recursion
}

int main()
{
    cout << fibonacci(5) << endl; //* 5
    
}