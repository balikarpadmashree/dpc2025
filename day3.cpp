#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size(), n = arr2.size();
    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            swap(arr1[i], arr2[0]);
            int first = arr2[0];
            int k = 1;
            while (k < n && arr2[k] < first) {
                arr2[k - 1] = arr2[k];
                k++;
            }
            arr2[k - 1] = first;
        }
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    merge(arr1, arr2);
    cout << "arr1: ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2: ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    return 0;
}
