#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num{100};
    int &ref{num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "----------------------------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "-------------------------------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n--------------------------------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    for (auto str : stooges)
        str = "Funny"; // str is a copy of the each vector elements
    for (auto str : stooges)
        cout << str << endl; // No change

    cout << "\n------------------------------------------------------------\n";
    for (auto &str : stooges)
        str = "Funny"; // str is a reference to the each vector elements
    for (auto const &str : stooges) // notice we are using const
        cout << str << endl; // now the vecctor element have changed
    return 0;
}