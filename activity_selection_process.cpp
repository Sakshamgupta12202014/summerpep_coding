#include <bits/stdc++.h>

using namespace std;

void ActivitySelectionProcess(vector<int> start, vector<int> end) {

    int latest_end_time = INT_MIN;
    for(int i=0; i<start.size(); i++) {

        if(start[i] > latest_end_time) {
            cout << start[i] << "  " << end[i] << endl;
            latest_end_time = end[i];
        }
        else{
            // skip the process
        }
    }
}

void CompleteAllPossibleProcesses(vector<int> start, vector<int> end) {

    int latest_end_time = INT_MIN;

    int mini = INT_MAX;
    int indx = -1;
    int count = 0;

    vector<bool> visited(end.size(), false);

    while(true) {

        if(count == end.size()) {
            break;
        }

        for(int i=0; i<end.size(); i++) {
            if(/*end[i] != -1*/ visited[i] != true) {
                if(end[i] < mini) {
                    mini = end[i];
                    indx = i;
                }
            }
        }

        if(start[indx] > latest_end_time) {
            cout << start[indx] << "   " << end[indx] << endl;

            latest_end_time = mini;
        }
        // end[indx] = -1;
        visited[indx] = true;
        mini = INT_MAX;
        count++;
    }

    // cout << end;
    for(int i=0; i<end.size(); i++) {
        cout << end[i] << "  ";
    }
    cout << endl;
}

// Q--> given the matrix of M*N you have to find if there exists a square matrix of size L and every element inside that matrix should be greater than or equal to L , that L will be considered as good length , return that good length 

void findSquareMatrix(vector<vector<int>> matrix) {

    
}



int main() {
    
    vector<int> start = {1, 3, 4, 6, 8, 5};
    vector<int> end = {10, 4, 7, 8, 9, 9};

    // ActivitySelectionProcess(start, end);
    CompleteAllPossibleProcesses(start, end);

    return 0;
}