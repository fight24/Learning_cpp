// ! Section 10
// ! Challenge
// * Substitution Cipher

/*
* A simple and very old method of sending secret messages is the substitution cipher.
* You might have used this cipher with your friends when you were a kid.
* Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
* For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

* Write a program thats ask a user to enter a secret message.

* Encrypt this message using the substitution cipher and display the encrypted message.
* Then decryped the encrypted message back to the original message.

* You may use the 2 strings below for  your subsitition.
* For example, to encrypt you can replace the character at position n in alphabet 
* with the character at position n in key.

* To decrypt you can replace the character at position n in key
* with the character at position n in alphabet.

* Have fun! And make the cipher stronger if you wish!
* Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
* forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
* This could also be improved.

* Remember, the less code you write the less code you have to test!
* Reuse existing functionality in libraries and in the std::string class!
*/
// I'll meet you at billy's house at 10AM
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    const string ALPHABET {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string KEY {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string s, encrypt_s {}, decrypt_s {};
    cout << "Enter your secret message: ";
    getline(cin, s);
    cout << "-------------------------------------------\n";
    for (char c : s)
    {
        if (isalpha(c))
        {
            encrypt_s += KEY.at(ALPHABET.find(c));   

        }
        else
        {
           encrypt_s += c; 
        }
    }
    cout << "Encrypting message ...\n"
         << "Encrypted message: " << encrypt_s ;
    for (char c : encrypt_s)
    {
        if (isalpha(c))
        {

            decrypt_s += ALPHABET.at(KEY.find(c)); 
        }
        else
        {
            decrypt_s += c;
        }
    }
    cout << "\nDecrypting message ...\n"
         << "Decrypted message: " << decrypt_s ;
    return 0;
}
// ! Another way
// int main() {
    
//     string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//     string key  {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
   
//     string secret_message {};
//     cout << "Enter your secret message : ";
//     getline(cin, secret_message);
    
//     string encrypted_message {};
    
//     cout << "\nEncrypting message..." << endl;
    
//     for (char c: secret_message) {
//         size_t position = alphabet.find(c);
//         if (position != string::npos) {
//             char new_char {  key.at(position) };
//             encrypted_message += new_char;
//         } else {
//             encrypted_message += c;
//         }
//     }
    
//     cout << "\nEncrypted message: " << encrypted_message << endl;
    
//     string decrypted_message {};
//     cout << "\nDecrypting message..." << endl;
    
//     for (char c: encrypted_message) {
//         size_t position = key.find(c);
//         if (position != string::npos) {
//             char new_char { alphabet.at(position) };
//             decrypted_message += new_char;
//         } else {
//             decrypted_message += c;
//         }
//     }
    
//     cout << "\nDecrypted message: " << decrypted_message << endl;
    
//     cout << endl;
//     return 0;
// }
