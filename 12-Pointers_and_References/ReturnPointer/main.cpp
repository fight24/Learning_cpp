#include <iostream>
#include <cstdio>
using namespace std;

int *creat_array(size_t size, int init_value =  0)
{
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i {0}; i < size; ++i)
    {
        *(new_storage + i) = init_value;
    }
    return new_storage;
}
void display(const int *const arr, size_t size)
{
    cout << "\n arr: ";
    for(size_t i {0}; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main()
{
    int *my_arr {nullptr};
    size_t size;
    int init_value {};

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;

    my_arr = creat_array(size, init_value);
    display(my_arr, size);
    delete [] my_arr;
    return 0;
}