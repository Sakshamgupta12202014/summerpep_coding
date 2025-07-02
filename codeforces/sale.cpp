#include <bits/stdc++.h>

using namespace std;

int solve(arr){

    int money = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] < 0) {
            money += abs(arr[i]);
        }
    }
    return money;
}

int main() {

    int n , m;
    cin >> n >> m;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int money = solve(arr);
    cout << money;
    return 0;
}

