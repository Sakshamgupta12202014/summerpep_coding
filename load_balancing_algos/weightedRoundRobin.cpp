#include <bits/stdc++.h>

using namespace std;



class LoadBalancer{

public: 
    vector<string> servers;
    vector<int> capacity;
    int currentIndex;

    LoadBalancer(){
        cout << "-----Load Balancer-----" << endl;
    }
    
    void balanceLoad(int req) {

        int cap = capacity[currentIndex];
        for(int i=1; i<=10; i++) {

            if(cap>0){
                cout << "Request " << i << " is routed to " << servers[currentIndex] << endl;
                cap--;
            }
            else{
                currentIndex++;
                currentIndex = currentIndex % (servers.size());
                cap = capacity[currentIndex];
                cout << "Request " << i << " is routed to " << servers[currentIndex] << endl;
                cap--;
            }
        }
    }

};


int main() {

    LoadBalancer* loadBalancer = new LoadBalancer();
    loadBalancer->servers.push_back("Server1");
    loadBalancer->servers.push_back("Server2");

    loadBalancer->capacity.push_back(3);
    loadBalancer->capacity.push_back(1);

    loadBalancer->currentIndex = 0;
    
    int requests = 10;

    loadBalancer->balanceLoad(10);

    return 0;
}