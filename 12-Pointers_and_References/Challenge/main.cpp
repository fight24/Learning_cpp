
/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
  (Viết hàm C++ có tên apply_all dự kiến ​​hai mảng số nguyên và kích thước của chúng và
  phân bổ động một mảng số nguyên mới có kích thước bằng tích của 2 kích thước mảng
  
  Hàm sẽ lặp qua mảng thứ hai và nhân từng phần tử trên từng phần tử của mảng 1 và lưu trữ
  sản phẩm trong mảng mới được tạo.
  
  Hàm sẽ trả về một con trỏ tới mảng mới được phân bổ.
  
  Bạn cũng có thể viết một hàm in yêu cầu một con trỏ tới một mảng các số nguyên và kích thước của nó, đồng thời hiển thị
  các phần tử trong mảng.
    
  Ví dụ,
  
  Dưới đây là đầu ra từ đoạn mã sau nằm trong main:)

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
#include <iostream>

using namespace std;
// print array
void print(const int *const arr, const size_t size);
// handle array
void handle_array(int *arr, int arr1[], size_t arr1_size, int arr2[], size_t arr2_size);
// apply all method
int* apply_all(int arr1[], size_t size_arr_1, int arr2[], size_t size_arr_2 );
int main()
{
    const size_t array1_size {5}, array2_size {3};
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    cout << "\nArray 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    delete [] results;
    return 0;
}

// print with pointers parameters
void print(const int *const arr, const size_t size)
{
    cout << "[ ";
    for (size_t i {0}; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}
int* apply_all(int arr1[], size_t size_arr_1, int arr2[], size_t size_arr_2)
{
    size_t arr_size = size_arr_1 * size_arr_2;
    int *arr_ptr = new int[arr_size];
    handle_array(arr_ptr, arr1, size_arr_1, arr2, size_arr_2);
    return arr_ptr;

}

void handle_array(int *arr, int arr1[], size_t arr1_size, int arr2[], size_t arr2_size)
{
    for(size_t j {0}; j < arr2_size; j++)
    {
        for(size_t i {0}; i < arr1_size; i++)
        {
            *(arr++) = arr2[j]*arr1[i];
        }
    }
}