#include <bits/stdc++.h>
using namespace std;
vector<int> slidingWindowMaximum(vector<int>& arr, int k) {
    deque<int> dq; 
    vector<int> result;
   for (int i = 0; i < arr.size(); i++)
{
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
        }
}

    return result;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = slidingWindowMaximum(arr, k);
    for (int x : result) cout << x << " ";
    return 0;
}
