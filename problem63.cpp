  #include <bits/stdc++.h>
using namespace std;

bool canAllocate(const vector<long long>& a, int M, long long maxAllowed) {
    int n = a.size();
    int students = 1;
    long long currentSum = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > maxAllowed) return false;
        if (currentSum + a[i] <= maxAllowed) {
            currentSum += a[i];
        } else {
            students++;
            currentSum = a[i];
            if (students > M) return false;
        }
    }
    return true;
}

long long findMinMaxPages(const vector<long long>& a, int M) {
    int n = a.size();
    if (M > n) return -1;
    long long lo = *max_element(a.begin(), a.end());
    long long hi = accumulate(a.begin(), a.end(), 0LL);
    long long ans = hi;
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        if (canAllocate(a, M, mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<long long> pages(N);
        for (int i = 0; i < N; ++i) cin >> pages[i];
        cout << findMinMaxPages(pages, M) << "\n";
    }
    return 0;
}


