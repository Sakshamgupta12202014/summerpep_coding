#include <bits/stdc++.h>

using namespace std;


void maximizeEqualElements(vector<int> arr) {

    int sum = 0;
    int n = arr.size();
    for(int i=0; i<arr.size(); i++) {
        sum += arr[i];
    }

    cout << n - (sum % n) << endl;
    // if(sum % (arr.size()) == 0) {
    //     cout << arr.size() << endl;
    // }

    // else{
    //     cout << arr.size() - (sum % arr.size()) << endl;
    // }
}
int main() {

    vector<int> arr = {1,4,1,4,5};
    maximizeEqualElements(arr);

    return 0;
}