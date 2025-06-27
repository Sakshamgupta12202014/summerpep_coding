#include <bits/stdc++.h>

using namespace std;


void decodeBorzeCode(string borzeCode) {

    string num = "";
    int indx = 0;
    int len = borzeCode.length();
    while(indx < len) {

        cout << "In" << endl;
        if(borzeCode[indx] == '.'){
            num += "0";
            indx++;
        }
        if(borzeCode[indx] == '-') {
            if(borzeCode[indx+1] == '-'){
                num += "2";
                indx+=2;
            }
        }
        if(borzeCode[indx] == '-'){
            if(borzeCode[indx+1] == '.') {
                num += "1";
                indx+=2;
            }
        }

    }

    cout << "ternery number : " << num << endl;
}

int main() {

    string borzeCode = ".-.--";
    decodeBorzeCode(borzeCode);

    return 0;
}