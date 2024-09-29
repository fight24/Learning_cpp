#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int p {5};
    cout << "value of p is " << p << endl;
    cout << "sizeof of p is " << sizeof p << endl;
    cout << "Address of p is " << &p << endl;

    int *ptr_p;
    cout << "value of ptr_p is " << ptr_p << endl; // garbage
    cout << "sizeof of ptr_p is " << sizeof ptr_p << endl;
    cout << "Address of ptr_p is " << &ptr_p << endl;
    ptr_p = nullptr;
    cout << "value of ptr_p is " << ptr_p << endl;

    int *ptr_p1 {nullptr};
    double *ptr_p2 {nullptr};
    unsigned long long *ptr_p3 {nullptr};
    vector<string> *ptr_p4 {nullptr};
    string *ptr_p5 {nullptr};
    cout << "sizeof of ptr_p 1 is " << sizeof ptr_p1 << endl;
    cout << "sizeof of ptr_p 2 is " << sizeof ptr_p2 << endl;
    cout << "sizeof of ptr_p 3 is " << sizeof ptr_p3 << endl;
    cout << "sizeof of ptr_p 4 is " << sizeof ptr_p4 << endl;
    cout << "sizeof of ptr_p 5 is " << sizeof ptr_p5 << endl;

    int score{10};
    //double high_temp{100.7};

    int *score_ptr {nullptr};

    score_ptr = &score;
    cout << "Value of score is " << score << endl;
    cout << "Address of score is " << &score << endl;
    cout << "Value of score_ptr is " << score_ptr << endl;

    //! score_ptr = &high_temp; --> compile error
    return 0;
}