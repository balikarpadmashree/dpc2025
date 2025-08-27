#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";
    int start = 0, maxLen = 1; 
    auto expandAroundCenter = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            int currLen = right - left + 1;
            if (currLen > maxLen) {
                maxLen = currLen;
                start = left;
            }
            left--;
            right++;
        }
    };
    
    for (int i = 0; i < n; i++) {
        expandAroundCenter(i, i);
        expandAroundCenter(i, i + 1);
    }
    
    return s.substr(start, maxLen);
}

int main() {
    vector<string> testCases = {"babad", "cbbd", "a", "aaaa", "abc"};
    for (string s : testCases) {
        cout << "Input: " << s << " -> Output: " << longestPalindrome(s) << endl;
    }
    return 0;
}
