#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int score {100};
    int *score_ptr {&score};

    cout << "Score ptr: " << *score_ptr << endl;

    *score_ptr = 200;

    cout << "Score ptr changed:  " << *score_ptr << endl;
    cout << "Score changed:  " << score << endl;

    cout << "-------------------------------------------\n";
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    cout << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    cout << "-------------------------------------------\n";
    
    string name {"alpha"};
    string *str_ptr {&name};

    cout << *str_ptr << endl;
    name = "Beta";
    cout << *str_ptr << endl;
    cout << "-------------------------------------------\n";

    vector<string> str_v {"alpha", "beta", "etc"};
    vector<string> *v_ptr {nullptr};
    v_ptr = &str_v;
    cout << "First str_v: " << (*v_ptr).at(0) << endl;

    cout << "str_v: ";
    for (auto str : *v_ptr)
    {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}