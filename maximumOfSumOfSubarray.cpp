#include <bits/stdc++.h>

using namespace std;

void maximumOfSumOfSubarray(vector<int> arr, int k) {

    int arrSize = arr.size();
    int max_size = INT_MIN;

    int i=0,j=0;
    int sum = 0;
    int size = 0;
    int m, n;

    while(j < arrSize) {

        sum += arr[j];

        while(sum >= k) {
            sum -= arr[i];
            i++;
        }

        
        if(sum < k) {

            // This if is only used to store the indices of the subarray 
            if((j-i+1) > max_size){     // yaar tabhi subarray store karo jab tumhe pahle se bada size mila hai logial hai bhai  initially max_size is INT_MIN so 1 bhi bada hoga toh uss subarray ke indices store krega then max_size badega aur agar pahle se bada  hoga tabhi hum subarray ke indices store karenge 
                m = i;
                n = j;
            }
            max_size = max(max_size, j-i+1);

            // for(int a=i; a<=j; a++){
            //     cout << arr[a] << "  ";
            // }
            // cout << endl;
        }
        j++;
    }

    cout << "Max subarray size: " << max_size << endl;
    for(int l=m; l<=n; l++) {
        cout << arr[l] << "  ";
    }
    cout << endl;
}

int main() {

    vector<int> arr = {2,3,5,1,7,10};
    int k = 10;
    maximumOfSumOfSubarray(arr, 10);
    return 0;
}