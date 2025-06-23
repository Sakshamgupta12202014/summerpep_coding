#include <bits/stdc++.h>

using namespace std;

void maximumOfSumOfSubarray(vector<int> arr, int k) {

    int arrSize = arr.size();
    int max_size = INT_MIN;

    int i=0,j=0;
    int sum = 0;
    int size = 0;

    while(j < arrSize) {

        sum += arr[j];

        while(sum >= k) {
            sum -= arr[i];
            i++;
        }

        
        if(sum < k) {
            max_size = max(max_size, j-i+1);

            for(int a=i; a<=j; a++){
                cout << arr[a] << "  ";
            }
            cout << endl;
        }
        j++;
    }

    cout << "Max subarray size: " << max_size << endl;
}

int main() {

    vector<int> arr = {2,3,5,1,7,10};
    int k = 10;
    maximumOfSumOfSubarray(arr, 10);
    return 0;
}