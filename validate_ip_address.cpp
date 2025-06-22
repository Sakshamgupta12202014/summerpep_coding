#include <bits/stdc++.h>

using namespace std;


void validateIPAddress(string ip) {

    // there should be 3 dots
    int dots = 0;

    for(int i=0; i<ip.length(); i++) {
        if(ip[i] == '.') dots++;
    }

    if(dots != 3) {
        // cout << " i came here" << endl;
        cout << "entered ip address is not valid ip address!!!" << endl;
        return;
    }

    int num = INT_MIN;   // ye maine ... wale case ko handle krne ke liye kiya hai
    for(int i=0; i<ip.length(); i++) {

        if(ip[i] != '.' && isdigit(ip[i])){  

            if(num == INT_MIN) num = 0;   // ye maine ... wale case ko handle krne ke liye kiya hai
            int dig = ip[i] - '0';
            num = num * 10 + dig;
        }

        else if(ip[i] == '.') {
            // check the num formed is in range 0-255
            if(!(num >= 0 && num <= 255)){
                cout << "entered ip address is not valid ip address!!!" << endl;
                return;
            }
            num = 0;
        }
        else{
            // when the char is neither a digit nor a (.) dot
            cout << "entered ip address is not valid ip address!!!" << endl;
            return;
        }
    }

    if(num != 0) {
        if(!(num >= 0 && num <= 255)){
                cout << "entered ip address is not valid ip address!!!" << endl;
                return;
        }
    }

    cout << "hurray!, entered ip address is a valid ip address!!!" << endl;
}

class Enc_Dec_Data {


public:
    string data;
    int shift;
    // ciphering text data
    void encryptData(string &data, int shift) {
    
        this->data = data;
        for(int i=0; i<data.length(); i++) {
    
            char c = data[i];
            // shift the characters
    
            if(isalpha(data[i])) {
    
                // if ch is uppercase letter
                if(isupper(data[i])) {
                    data[i] = (c - 'A' + shift) % 26 + 'A';
                }
                // if ch is lowercase letter
                else if(islower(data[i])) {
                    data[i] = (c - 'a' + shift) % 26 + 'a';
                }
            }
            else{
                // other than alphabet
                int ascii = (int)c;
                ascii += shift;
    
                data[i] = (char)ascii;
            }
    
        }
        this->data = data;

        cout << "data encrypted:- " << data << endl;
    }
    
    void decrypt() {
        decryptData(this->data, this->shift);
    }

private:
    void decryptData(string data, int shift) {
        
        cout << "inside decryption data:- " << data << endl;
        for(int i=0; i<data.length(); i++) {

            char c = data[i];
            // shift the characters
    
            if(isalpha(data[i])) {
    
                // if ch is uppercase letter
                if(isupper(data[i])) {
                    data[i] = (c - 'A' - shift) % 26 + 'A';
                }

                // if ch is lowercase letter
                else if(islower(data[i])) {
                    data[i] = (c - 'a' - shift) % 26 + 'a';
                }
            }
            else{
                // other than alphabet
                int ascii = (int)c;
                ascii -= shift;
    
                data[i] = (char)ascii;
            }
        }

        cout << "data decrypted:- " << data << endl;
    }
};

// make palindrome string , given a string you have to make it palindrome


// find gcd/hcf of two numbers 
int findGcd(int a, int b) {

    int gcd = 0;
    for(int i=1; i<(a > b ? b : a); i++) {
        if(a%i == 0 && b%i == 0) {
            gcd = i;
        }
    }

    cout << "The gcd of the two number is :- " << gcd << endl;
    return gcd;
}

void findLcm(int a, int b) {

    // since LCM * HCF = a * b

    int hcf = findGcd(a, b);
    int lcm = (a*b) / hcf;

    cout << "The lcm of the two numbers :- " << lcm << endl;
}

// The Sieve of Eratosthenes is a famous and efficient algorithm to find all prime numbers up to a given number n.




int main() {

    // string ip;
    
    // cout << "Enter any IP address to validate :- " << endl;
    // cin >> ip;

    // validateIPAddress(ip);

    Enc_Dec_Data* obj = new Enc_Dec_Data();


    string data;
    cout << "Enter data to encrypt:- ";
    cin >> data;

    obj->data = data;

    int shift;
    cout << "Set a shifting scale:- ";
    cin >> shift;

    obj->shift = shift;

    obj->encryptData(data, shift);  // data encrypted

    obj->decrypt();

    // int a = 86;
    // int b = 34;

    // int gcd = findGcd(a, b);
    // findLcm(a, b);

    // char c = '@';
    // int ascii = (int)c;

    // ascii++;
    // c = (char)ascii;

    // cout << ascii << endl;
    // cout << c;


    return 0;
}