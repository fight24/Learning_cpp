
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)
    
    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/
#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
  //  cout << num1 << " + " <<  num2 << " = "<< num1+ num2 << endl;
 
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " <<  num2 << " = "<< result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " <<  num2 << " = "<< result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " <<  num2 << " = "<< result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " <<  num2 << " = "<< result << endl;    
    
    result = num2 / num1;
    cout << num2 << " / " <<  num1 << " = "<< result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    
    result = num1 * 10 + num2;
    
    cout << 5/10 << endl;
    
    cout << 5.0/10.0 << endl;
    
    cout << endl;

        
    int counter {10};
    result = 0;
     
// Example 1 - simple increment
    // cout << "Counter : " << counter << endl;
    
    // counter = counter + 1;
    // cout << "Counter : " << counter << endl;
  
    // counter++;
    // cout << "Counter : " << counter << endl;

    // ++counter; 
    // cout << "Counter : " << counter << endl;

// Example 2 - preincrement
//    counter = 10;
//    result = 0;
   
//    cout << "Counter : " << counter << endl;
   
//    result = ++counter; // Note the pre increment
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

// Example 3 - post-increment
//    counter = 10;
//    result = 0;
   
//    cout << "Counter : " << counter << endl;
   
//    result = counter++; // Note the post increment
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

// Example 4
//    counter = 10;
//    result = 0;

//    cout << "Counter : " << counter << endl;

//    result = ++counter + 10;  // Note the pre increment
       
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

// Example 5
//    counter = 10;
//    result = 0;

//    cout << "Counter : " << counter << endl;

//    result = counter++ + 10;  // Note the post increment
       
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;
    return 0;
}

