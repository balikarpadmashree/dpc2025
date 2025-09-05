#include <bits/stdc++.h>
using namespace std;
int firstElementToRepeatKTimes(vector<int>& arr, int k) 
{
    unordered_map<int, int> freq;
    for (int x : arr) 
    {
        freq[x]++;
    }
    for (int x : arr) {
        if (freq[x] == k) {
            return x;
        }
    }
    return -1;
}

int main() 
{
    vector<int> arr1 = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    cout << firstElementToRepeatKTimes(arr1, 2) << endl;

    vector<int> arr2 = {2, 3, 4, 2, 2, 5, 5};
    cout << firstElementToRepeatKTimes(arr2, 2) << endl; 

    vector<int> arr3 = {1, 1, 1, 1};
    cout << firstElementToRepeatKTimes(arr3, 1) << endl; 

    vector<int> arr4 = {10};
    cout << firstElementToRepeatKTimes(arr4, 1) << endl; 

    vector<int> arr5 = {6, 6, 6, 6, 7, 7, 8, 8, 8};
    cout << firstElementToRepeatKTimes(arr5, 3) << endl; 
    return 0;
}
