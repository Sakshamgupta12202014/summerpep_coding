#include<bits/stdc++.h>
using namespace std;


pair<long long, long long> findCards(int cards) {
    
    char turn = 'A';
    int A=1, B=2;
    int cycle = 1;
    long long alice = 0;
    long long bob = 0;
    while(cards > 0) {
        
        if(turn == 'A') {
            if(cycle <= cards) {
                alice += cycle;
                cards -= cycle;
                A--;
                cycle++;
            }
            
            else{
                alice += cards;
                cards = 0;
                A--;
            }
            
            if(A==0){
                turn = 'B';
                A=2;
            }
        }
        
        else if(turn == 'B') {
            if(cycle <= cards) {
                bob += cycle;
                cards -= cycle;
                cycle++;
                B--;
            }
            else{
                bob += cards;
                cards = 0;
                B--;
            }
            if(B==0){
                turn = 'A';
                B=2;
            }
        }
    }
    
    pair<long long, long long> p;
    p.first = alice;
    p.second = bob;
    return p;
}

int main() {
    int t;
    
    cin >> t;
    vector<pair<long long , long long>> res;
    while(t--) {
        int cards;
        cin >> cards;
        
        pair<long long, long long> p = findCards(cards);
        res.push_back(p);
    }
    
    for(auto p:res) {
        cout << p.first << " " << p.second << endl;
    }
}