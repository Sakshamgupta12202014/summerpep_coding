#include <bits/stdc++.h>

using namespace std;


// stack implementation 
void checkExpression(string exp) {

    stack<char> st;
    for(int i=0; i<exp.length(); i++) {
        
        if(st.empty()) {

            if(exp[i] == '+' || exp[i] == '*' || exp[i] == '/') {
                cout << "The expression is INVALID!!" << endl;
                return;
            }
            st.push(exp[i]);
        }

        // no two operands should come together
        else if(!st.empty() && (isalpha(exp[i]) || isdigit(exp[i]))) {
            if(isalpha(st.top())) {
                cout << "The expression is INVALID!!" << endl;
                return;
            }
            else if(st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*' ) {
                st.push(exp[i]);
            }
        }

        // no two operators should come together
        else if(!st.empty() && (exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')) {
            if(st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*') {
                cout << "The expression is INVALID!!" << endl;
                return;
            }
            else{
                st.push(exp[i]);
            }
        }
    }

    if(st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*'){
        cout << "The expression is INVALID!!" << endl;
        return;
    }

    cout << "HURRAY!!, The expression is VALID!!" << endl;
}

int main() {

    string exp;
    cout << "Enter exp to validate:- ";
    cin >> exp;

    checkExpression(exp);
    
    return 0;
}