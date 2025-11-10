#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &arr, int i, int n) {
    if (i == n) {
        for (int x : arr) cout << x << " ";
        cout << endl;
        return;
    }
    for (int j = i; j < n; j++) {
        swap(arr[i], arr[j]);
        permute(arr, i + 1, n);
        swap(arr[i], arr[j]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    permute(arr, 0, arr.size());
    return 0;
}
