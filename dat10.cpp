#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());  
        mp[key].push_back(s);           
    }
    
    vector<vector<string>> result;
    for (auto& entry : mp) {
        result.push_back(entry.second);
    }
    
    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> grouped = groupAnagrams(strs);
    
    for (auto group : grouped) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }
    
    return 0;
}
