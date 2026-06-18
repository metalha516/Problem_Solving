#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;
        
        long long sum = 0;
        int mn = a[0];
        for (int i = 0; i < n; i++) {
            mn = min(mn, a[i]);
            sum += mn;
        }
        cout << sum << "\n";
    }
}