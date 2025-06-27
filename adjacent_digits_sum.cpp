#include <bits/stdc++.h>

using namespace std;


void findIntgerN(int x, int y){

    // find an integer N such that SumOfDigOf(N) == x and sum of digits of SumOfDigOf(N+1) == y

    // kahan tak for loop run krni hai abhi mujhe nhi pata
    long long range = 100000000000;
    for(long long i=0; i<range; i++) {

        int num = i;
        int sumOfDig = 0;
        while(num > 0) {
            int dig = num % 10;
            sumOfDig += dig;
            num = num / 10;
        }

        if(sumOfDig != x){
            continue;
            // no need to check further for num+1 since Sum(n) condition satisfy hi nhi kar paya
        }

        num = i+1;
        sumOfDig = 0;

        while(num > 0) {
            int dig = num % 10;
            sumOfDig += dig;
            num = num / 10;
        }

        if(sumOfDig == y && i!=x && (i+1)!= y) {
            cout << i << " and " << i+1 << " are the integers that satisfy the condition" << endl;
            break;
        }
    }
}

int main() {

    int x = 999, y=1;
    findIntgerN(x, y);
    
    return 0;
}