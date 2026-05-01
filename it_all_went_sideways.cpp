#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    // Input array
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Build suffix minimum array
    vector<long long> suffixMin(n);
    suffixMin[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suffixMin[i] = min(arr[i], suffixMin[i + 1]);
    }

    // Step 2: Calculate total difference
    long long answer = 0;
    for (int i = 0; i < n; i++) {
        answer += (arr[i] - suffixMin[i]);
    }

    // Step 3: Find longest segment where suffixMin stays same
    long long maxSame = 1;
    long long currentSame = 1;

    for (int i = 1; i < n; i++) {
        if (suffixMin[i] == suffixMin[i - 1]) {
            currentSame++;
            maxSame = max(maxSame, currentSame);
        } else {
            currentSame = 1;
        }
    }

    // Step 4: Add (maxSame - 1) to answer
    answer += (maxSame - 1);

    cout << answer << "\n";
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}