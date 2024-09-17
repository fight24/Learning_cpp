#include <iostream>
#include <vector>
using namespace std;
int main()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "The fisrt vowel is: " << vowels[0] << endl;
    int arr_scores[10] {100};
    cout << arr_scores[1] << endl;
    vector <int> scores (3);
    vector <int> test_scores (3, 100);
    cout << "Test scores using array syntax: " << test_scores[0] << endl;
    cout << "Test scores using vector syntax: " << test_scores.at(0) << endl;
    test_scores.push_back(90);
    cout << "Test scores using vector syntax: " << test_scores.at(3) << endl;
    return 0;
}