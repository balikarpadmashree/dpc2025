#include <bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int n = height.size();
    if (n < 3) return 0; // Need at least 3 bars to trap water

    vector<int> left_max(n), right_max(n);
    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i-1], height[i]);
    }
    right_max[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) {
        right_max[i] = max(right_max[i+1], height[i]);
    }
    int water = 0;
    for (int i = 0; i < n; i++) {
        water += min(left_max[i], right_max[i]) - height[i];
    }

    return water;
}

int main() {
    vector<int> h1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> h2 = {4,2,0,3,2,5};
    vector<int> h3 = {1,1,1};
    vector<int> h4 = {5};
    vector<int> h5 = {2,0,2};

    cout << trap(h1) << endl; // 6
    cout << trap(h2) << endl; // 9
    cout << trap(h3) << endl; // 0
    cout << trap(h4) << endl; // 0
    cout << trap(h5) << endl; // 2

    return 0;
}
