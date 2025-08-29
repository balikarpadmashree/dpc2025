#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        while (charSet.count(s[right])) {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    cout << lengthOfLongestSubstring("abcabcbb") << endl; 
    cout << lengthOfLongestSubstring("bbbbb") << endl;    
    cout << lengthOfLongestSubstring("pwwkew") << endl;   
    cout << lengthOfLongestSubstring("abcdefgh") << endl; 
    cout << lengthOfLongestSubstring("a") << endl;        
    return 0;
}
