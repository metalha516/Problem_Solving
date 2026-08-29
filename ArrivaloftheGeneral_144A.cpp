#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxH = *max_element(a.begin(), a.end());
    int minH = *min_element(a.begin(), a.end());

    int maxPos = -1;
    int minPos = -1;

    // First occurrence of maximum
    for (int i = 0; i < n; i++) {
        if (a[i] == maxH) {
            maxPos = i;
            break;
        }
    }

    // Last occurrence of minimum
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == minH) {
            minPos = i;
            break;
        }
    }

    int ans = maxPos + (n - 1 - minPos);

    // Maximum crosses minimum
    if (maxPos > minPos) {
        ans--;
    }

    cout << ans << '\n';

    return 0;
}