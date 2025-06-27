#include<bits/stdc++.h>
using namespace std;


long long findCoins(long long n) {
    
    long long coins = 0;
    queue<long long> q;
    q.push(n);
    
    while(q.front() > 3) {
        
        long long num = q.front();
        q.pop();
        long long x = num / 4;
        
        q.push(x);
        q.push(x);
    }
    
    coins = q.size();
    return coins;
}

// n can go upto 10^18 which will occupy very large space in queue that will throw error bad alloc 
// so this question involves dp memoization
int main() {
    
    int t;
    cin >> t;
    
    vector<long long> res;
    while(t--) {
        
        long long n;
        cin >> n;
        
        long long coins = findCoins(n);
        res.push_back(coins);
    }
    
    for(int i=0; i<res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}