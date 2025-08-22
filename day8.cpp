#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    vector<string> words;
    int n = s.size();
    int i = 0;
    while (i < n && s[i] == ' ') i++;

    while (i < n) {
        string word;
        while (i < n && s[i] != ' ') {
            word.push_back(s[i]);
            i++;
        }
        if (!word.empty()) words.push_back(word);
        while (i < n && s[i] == ' ') i++;
    }
    reverse(words.begin(), words.end());
    string result;
    for (int j = 0; j < words.size(); j++) {
        if (j > 0) result += " ";
        result += words[j];
    }

    return result;
}

int main() {
    cout << reverseWords("the sky is blue") << endl;        // blue is sky the
    cout << reverseWords("  hello world  ") << endl;        // world hello
    cout << reverseWords("a good   example") << endl;       // example good a
    cout << reverseWords("    ") << endl;                   // (empty string)
    cout << reverseWords("word") << endl;                   // word
    return 0;
}
