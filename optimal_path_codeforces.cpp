#include<bits/stdc++.h>
using namespace std;


long long minimalCostPath(int n, int m){
    long long minCost = 0;
    int i=1, j=1;
    
    // int formula = (i-1)*m + j;
    
    for(i=1; i<=n; i++) {
        
        for(j=1; j<=m; j++) {
            minCost += (i-1)*m + j;
        }
        break;
    }
    
    for(i=j-1; i<=m; i++) {
        // cout << "2nd";
        for(int k=2; k<=n; k++){
            minCost += (k-1)*m + i;
        }
        break;
    }
    
    return minCost;
}   

int main() {
    int t;
    cin >> t;
    
    vector<long long> res;
    while(t--) {
        int n, m;
        
        cin >> n >> m;
        long long minCost = minimalCostPath(n,m);
        
        res.push_back(minCost);
        
    }
    cout << "Answers are----------------------" << endl;
    for(int i=0; i<res.size(); i++) {
        cout << res[i] << endl;
    }
}