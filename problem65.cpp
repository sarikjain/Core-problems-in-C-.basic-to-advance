#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int>& stalls, int cows, int dist) {
    int count = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last >= dist) {
            count++;
            last = stalls[i];
            if (count == cows) return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> stalls(n);
        for (int i = 0; i < n; i++) cin >> stalls[i];
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls.back() - stalls.front(), ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canPlace(stalls, c, mid)) {
                ans = mid;
                low = mid + 1;
            } else high = mid - 1;
        }
        cout << ans << endl;
    }
}






















