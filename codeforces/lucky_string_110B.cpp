#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    string ans = "";
    int modulo = 4;
    
    for(int i=0; i<n; i++) {
        char c = 97 + (i % modulo);
        ans += c;
    }
    cout << ans;
    return 0;
}