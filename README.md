# BILRED-CIPHER
This C++ program implements a simple Caesar cipher for encrypting and decrypting text by shifting letters. It handles uppercase and lowercase, leaving other characters unchanged. Users choose an operation (encrypt/decrypt), enter text, and provide a shift key. The program then outputs the processed text.

Actually, this was an assignment for our Computer Programming Subject. But it looked kinda boring(or maybe not that worth it), so I thought, why not make it stand out by sharing it at my GitHub Page

# Screenshot
![image](https://github.com/BilalAhmadKhanKhattak/BILRED-CIPHER/blob/main/ScreenshotCipher2.png)

## Features

* **Encryption:** Encrypt plaintext using a provided shift key.
* **Decryption:** Decrypt ciphertext using a provided shift key.
* **Case Sensitivity:** Preserves the case of the original letters.
* **Non-alphabetic Characters:** Non-alphabetic characters (spaces, punctuation, etc.) are left unchanged.
* **User-Friendly Interface:** Provides a simple command-line interface for choosing encryption or decryption and entering the text and shift key.

### Prerequisites

* A C++ compiler (like g++)
* Git (for cloning the repository)

### Cloning the Repository

First, clone the repository to your local machine:
open Terminal and type
```bash
git clone https://github.com/BilalAhmadKhanKhattak/BILRED-CIPHER
cd BILRED-CIPHER
```

Secondly,
Use VScode or Dev for the compilation and execution, (if you dont want a headache) 
OR
Compile the code using the following command in the terminal(where the .cpp file is located):

    ```bash
    g++ caesar_cipher.cpp -o caesar_cipher
    ```
### Running the Program

1.  After successful compilation, run the executable:

    ```bash
    ./CaesarCipherV1ByBilal
    ```

2.  Enjoy!!!

## Usage
1.  **Choose an operation:** Enter `1` for encryption or `2` for decryption.
2.  **Enter the secret message:** Type the text you want to encrypt or decrypt and press Enter.
3.  **Enter the key:** Enter the integer representing the shift value and press Enter.

The program will then output the encrypted or decrypted text.

