#include<iostream> // used for input/output ops
#include<string> // used for string manipulation
#include<cctype> // used for character classisfication functions

using namespace std;

string caesarCipherFunc(string plaintext, int shift) {
    string result = "";  // keeping this empty, just for now
    
    for (char b : plaintext) { // this would iterate through each character in the input "plaintext" string
        if (isalpha(b)) {  // checks if current character is an alphaBet
            char base = islower(b) ? 'a' : 'A'; // if char Is lowercase, then use 'a' as base, eLse 'A'

            // encryption shift's core formula
            b = (b - base + shift) % 26 + base;
            // This line accepts a character b, 
            // finds its 0-based index relative to 
            // base ('a' or 'A'), adds the shift, 
            // uses modulo 26 for alphabet wrap-around, 
            // and then converts the resulting index 
            // back to a character of the same case.


        }
        result += b; // if its not alphabet, just keep it as it is...
    }
    return result;
}

string caesarDecryptFunction(string ciphertext, int shift) {
    // DecRyption is just Encryption with the inverse shift
    return caesarCipherFunc(ciphertext, 26 - (shift % 26));
}

int main() {
    string plaintext;
    int shift;
    int choice;

    cout << R"(________________________________________________________________________________________
  ______  _____         ______ _______ ______   _______      _______ _____  _____  _     _ _______  ______
 |_____]   |   |      |_____/ |______ |     \ ' |______      |         |   |_____] |_____| |______ |_____/
 |_____] __|__ |_____ |    \_ |______ |_____/   ______|      |_____  __|__ |       |     | |______ |    \_
                                                                                                            v 1.0
 Created By Bilal Ahmad Khan AKA Mr. BILRED
 Github: https://github.com/BilalAhmadKhanKhattak

 This C++ program implements a simple Caesar cipher, allowing users to encrypt or decrypt text by shifting each letter 
 a specified number of positions in the alphabet. It handles both uppercase and lowercase letters, leaving other characters unchanged. 
 The program prompts the user for an operation (encrypt or decrypt), the text to process, and the shift key.                                                                                                           )";
    // Alright, in "our" terms, we call the above; BANNER (or you can say ASCII Art). Supposedly, a very important thing when we create some tool
    // and yeah, this "R" thing, called Raw String Literal, ensures that escape sequence don't interfere with our beautiful art!                                                                                                  
 
    cout << "\n\nChoose an operation:\n";
    cout << "1. Encryption\n";
    cout << "2. Decryption\n";
    cout << "Enter Your Choice (1 or 2): ";
    cin >> choice;
    cin.ignore(); // Consume the newline

    cout << "\nEnter The Secret Message: ";
    getline(cin, plaintext);

    cout << "Enter The Key: ";
    cin >> shift;

    // Here Comes selection part
    if (choice == 1) {
        string encryptedAlfaaz = caesarCipherFunc(plaintext, shift); // this one encrypts the user's plaintext message using the Caesar cipher function with the provided shift value.
        cout << "Encrypted Text: " << encryptedAlfaaz << endl;
    } else if (choice == 2) {
        string decrypted = caesarDecryptFunction(plaintext, shift); // decrypts the ciphertext using that caesarDecryptFunction with the provided shift value. 
                                                                    //(and yes, here this plaintext is ciphertext)
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}

// CreateD With Precision, By Bilal Ahmad Khan AKA Mr. BILRED
// https://github.com/BilalAhmadKhanKhattak
// https://www.linkedin.com/in/bilalahmadkhanakamrbilred