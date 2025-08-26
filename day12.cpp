#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c); // push opening brackets
        } 
            else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    vector<string> tests = {"()", "([)]", "[{()}]", "", "{[}"};
    for (string t : tests) {
        cout << "Input: " << (t.empty() ? "\"\"" : t) 
             << " -> Output: " << (isValid(t) ? "true" : "false") << endl;
    }
    return 0;
}
