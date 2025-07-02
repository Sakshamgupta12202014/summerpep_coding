#include<bits/stdc++.h>

using namespace std;

string isInEquillibrium(vector<vector<int>> forces, int t) {
    
    for(int i=0; i<3; i++) {
        int sum = 0;
        for(int j=0; j<t; j++) {
            sum += forces[j][i];
        }
        cout << sum << endl;
        if(sum != 0){
            return "NO";
        }
    }
    
    return "YES";
}

int main() {
    int t;
    cin >> t;

    
    vector<vector<int>> forces;
    while(t--) {
        
        vector<int> f(3);
        for(int i=0; i<3; i++) {
            cin >> f[i];
        }
        forces.push_back(f);
    }

    cout << endl;

    for(int i=0; i<forces.size(); i++) {
        for(int j=0; j<3; j++) {
            cout << forces[i][j] << "  ";
        }
        cout << endl;
    }
    
    string res = isInEquillibrium(forces,t);
    cout << res;
}