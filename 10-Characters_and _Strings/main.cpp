
#include <iostream>
#include <cctype> //* for character-based functions
#include <cstring> //* for c-style strings functions

// #include <string>
using namespace std;
int main()
{
    // ! Working with c-types strings
    // char first_name[20] {};
    // char last_name[20] {};
    // char full_name[50] {};
    // cout << first_name; //* will likely display garbage
    // cout << "Please enter your first name: ";
    // cin >> first_name;
    // cout << "\nPlease enter your last name: ";
    // cin >> last_name;
    // cout << "\n-------------------------------------" << endl;
    // cout << "Hello, " << first_name << "your first name has " << strlen(first_name) << " characters"
    //      << " and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
    // strcpy(full_name, first_name); //* copy first name to fulll name
    // strcat(full_name, " "); //* concatenate full name and a space
    // strcat(full_name, last_name); //* concatenate last name to full name
    // cout << "Your full name is " << full_name << endl;
    // cout << "------------------------------------------" << endl;

    // cout << "Enter your full name: ";
    // cin.getline(full_name,50);
    // cout << "Your full name is " << full_name << endl;
    /*
    * a = strcmp(string1, string2) 
    * string1 > string2 ->  a > 0
    * string1 == string2 ->  a = 0
    * string1 < string2 ->  a < 0
    */
   // ! c++ Strings
   string s1 {"abc def"};
    // cout << "Char at 0: " << s1.at(0) << endl;
    // cout << "--> ";
    // for (char c : s1)
    // {
    //    cout << c << " ";
    // }
    // cout << endl;
    //* Substrings
    // cout << "Substring: " << s1.substr(0,2) << endl;
    //* Search string
    // cout << "Search string: " << s1.find("abc") << endl;
    // cout << "Search char: " << s1.find('c') << endl;
    // cout << "Search not string: " << s1.find("xxx") << endl;
    //* input >> and getline
    getline(cin, s1);
    int num {0};
    cin >> num;
    cout << "S1: " << s1 << endl;
    
    cout << "Number: " << num << endl; 
    return 0;
}