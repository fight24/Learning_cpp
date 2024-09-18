#include <iostream>
// Make  sure you include for integer types
#include <climits> 
// Similar information for floating point numbers is contained in <cfloat> 
using namespace std;
int main(){
    /*************************************
     * Character Type
    
    ***************************************/
   char middle_initial {'J'};
   cout << "My middle initial is " << middle_initial << endl;
    /*************************************
     * Integer Type
    ***************************************/
   unsigned short int exam_score {55};
   cout << "My exam score was "<< exam_score << endl;
   
   int countries_represented {65};
   cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
   
   long people_in_florida {20610000};
   cout << "There are about "<< people_in_florida << " people in Florida" << endl;

   long long people_on_earth {7'600'000'000};
   cout << "There are about " << people_on_earth << " people on earth" << endl;

   long long distance_to_alpha_centauri {9'461'000'000'000};
   cout << "The distance to alpha centauri is "<< distance_to_alpha_centauri << " Kilometers" << endl;
    /*************************************
     * Floating Type
    
    ***************************************/
   float car_payment {401.23};
   cout << "My car payment is " << car_payment << endl;

   double pi {3.14159};
   cout << "PI is " << pi << endl;

   long double large_amount {2.7e120};
   cout << large_amount << " is a very big number" << endl;
    /*************************************
     * Boolean Type
    ***************************************/
    bool is_game_over {false};
    cout << "The value of gameOver is "<< is_game_over << endl;
    /*************************************
     * Overflow example
    ***************************************/
    // short value_1 {30000};
    // short value_2 {1000};
    // short value_3 {value_1*value_2};
    // cout << "The value 3 is " << value_3 << endl;
    /*************************************
     * Sizeof example
    ***************************************/
   cout << "sizeof information" << endl
        << "==========================================================" << endl
        << "Char: " << sizeof(char) << " bytes.\n"
        << "Int: " << sizeof(int) << " bytes.\n"
        << "Unsigned int: " << sizeof(unsigned int) << " bytes.\n"
        << "Short: " << sizeof(short) << " bytes.\n"
        << "Long: " << sizeof(long) << " bytes.\n"
        << "Long long: " << sizeof(long long) << " bytes.\n"
        << "============================================================\n"
        << "Float: " << sizeof(float) << " bytes.\n"
        << "Double: " << sizeof(double) << " bytes.\n"
        << "Long double: " << sizeof(long double) << " bytes.\n";
    // use values defined in <climits>
    cout << "==========================================================\n"
         << "Minimum values:\n"
         << "Char: " << CHAR_MIN << endl
         << "Int: " << INT_MIN << endl
         << "Short: " << SHRT_MIN << endl
         << "Long: " << LONG_MIN << endl
         << "Long long: " << LONG_LONG_MIN << endl
         << "===========================================================\n";

    cout << "==========================================================\n"
         << "Maximum values:\n"
         << "Char: " << CHAR_MAX << endl
         << "Int: " << INT_MAX << endl
         << "Short: " << SHRT_MAX << endl
         << "Long: " << LONG_MAX << endl
         << "Long long: " << LONG_LONG_MAX << endl
         << "===========================================================\n";
    // sizeof using variable names
    int age {21};
    cout << "Age is " << sizeof(age) << " bytes - sizeof(age).\n"
         << "Or age is " << sizeof age << " bytes - sizeof age.\n";
    
    double wage {22.24};
    cout << "Wage is " << sizeof(wage) << " bytes - sizeof (wage).\n"
         << "Or wage is " << sizeof wage << " bytes - sizeof wage.\n";

    
    return 0;
}