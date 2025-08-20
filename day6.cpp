#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                cout << "(" << i << ", " << j << ")\n";
            }
        }
    }

    return 0;
}
