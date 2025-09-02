#include <bits/stdc++.h>
using namespace std;
int evaluatePostfix(const string &expression) {
    stack<int> st;
    stringstream ss(expression);
    string token;
    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if (token == "+") st.push(b + a);
            else if (token == "-") st.push(b - a);
            else if (token == "*") st.push(b * a);
            else if (token == "/")
            {
                 st.push(b / a);
            }
        } 
        else {
            st.push(stoi(token)); 
        }
    }
    return st.top();
}
int main() {
    cout << evaluatePostfix("2 1 + 3 *") << "\n";                  
    cout << evaluatePostfix("5 6 +") << "\n";                      
    cout << evaluatePostfix("-5 6 -") << "\n";                     
    cout << evaluatePostfix("15 7 1 1 + - / 3 * 2 1 1 + + -") << "\n"; 
    cout << evaluatePostfix("5") << "\n";                        
    return 0;
}
