#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> leaders;
    int max_from_right = arr[n-1];
    leaders.push_back(max_from_right);

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            leaders.push_back(arr[i]);
            max_from_right = arr[i];
        }
    }

    reverse(leaders.begin(), leaders.end());
    for (int x : leaders) cout << x << " ";
    return 0;
}
