#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto& x : a) cin >> x;
        
        // Build segments: (sum, first_element)
        vector<pair<long long,long long>> segs;
        long long s = a[0];
        long long first = a[0];
        for(int i = 1; i < n; i++) {
            if(a[i-1] <= a[i]) {
                segs.push_back({s, first});
                s = a[i];
                first = a[i];
            } else {
                s += a[i];
            }
        }
        segs.push_back({s, first});
        
        // Merge segments greedily
        long long cur = segs[0].first;
        long long ans = cur;
        for(int i = 1; i < (int)segs.size(); i++) {
            if(cur > segs[i].second) {
                cur += segs[i].first;
            } else {
                ans = max(ans, cur);
                cur = segs[i].first;
            }
        }
        ans = max(ans, cur);
        cout << ans << "\n";
    }
}