#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreater(vector<int> arr) {

    int size = arr.size();
    vector<int> nge(size);
    stack<int> st;

    for(int i=size-1; i>=0; i--) {

        // if stack is empty then no greater element is there after that index
        if(st.empty()) {
            nge[i] = -1;
            st.push(arr[i]);
        }
        else if(!st.empty() && st.top() > arr[i]) {
            nge[i] = st.top();
            st.push(arr[i]);
        }
        else if(!st.empty() && st.top() <= arr[i]) {

            // pop untill you get a number that is greater that current number
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            // while doing pop operations , ultimately the stack is empty then it means that there is no greater element
            if(st.empty()){
                nge[i] = -1;
            }
            // if stack is not empty
            else{
                nge[i] = st.top();
            }

            st.push(arr[i]);
        }
    }
    return nge;
}

// more cleaner code and fewer lines 
// vector<int> nextGreater(vector<int> arr) {

//     int size = arr.size();
//     vector<int> nge(size);
//     stack<int> st;

//     for(int i=size-1; i>=0; i--) {

//         while(!st.empty() && arr[i] >= st.top()) {
//             st.pop();
//         }

//         nge[i] = st.empty() ? -1 : st.top();
//         st.push(arr[i]);
//     }
//     return nge;
// }

int main() {

    vector<int> arr = {2,7,3,5,4,6,8};
    vector<int> result = nextGreater(arr);

    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}