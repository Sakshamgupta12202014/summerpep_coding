#include <bits/stdc++.h>

using namespace std;

void pattern1(int rows) {

    int num = 1;
    for(int i=rows; i>0; i--) {

        for(int j=1; j<=i; j++) {
            cout << num << "    ";
            num++;
        }
        cout << endl;
    }
}


void pattern2(int rows) {


    for(int i=1; i<=rows; i++) {

        int n = i;
        int factor = 5;
        for(int j=i; j<=rows; j++) {
            cout << n << "   ";
            n += factor;
            factor--;
        }
        cout << endl;
    }
}

void pattern3(int rows) {

    int factor = 5;
    int n = 1;
    for(int i=1; i<=rows; i++) {

        int diff = rows - i + 1;
        int x = n;
        for(int j=1; j<=i; j++) {
            cout << x << "  ";
            x -= diff;
            diff++;
        }
        cout << endl;
        n += factor;
        factor--;
    }
}

void pattern4(int rows) {

    for(int i=1; i<=rows; i++) {

        for(int j)
    }
}

void pattern5(int rows) {

    int x = 0;
    int factor = 1;
    for(int i=1; i<=rows; i++) {

        x = x + factor;
        int n = x;
        for(int j=1; j<=i; j++) {
            cout << n << "  ";
            n--;
        }
        factor++;
        cout << endl;
    }
}


int main() {

    int rows = 5;
    // pattern1(rows);

    // pattern2(rows);

    // pattern5(rows+3);

    pattern3(rows);


    return 0;
}