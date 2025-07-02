#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> arr, int d) {
    int time_taken = 0;

    sort(arr.begin(), arr.end());
    
    if((arr[1] - arr[0]) < d) {
        time_taken += d - (arr[1]-arr[0]);
    }

    if(arr[2] - arr[1] < d) {
        time_taken += d - (arr[2]-arr[1]);
    }
    return time_taken;
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    int time_taken = solve(arr,d);
    cout << time_taken;
    return 0;
}