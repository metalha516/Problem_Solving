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
        vector<long long> a(n), b(n);
        for(auto& x : a) cin >> x;
        for(auto& x : b) cin >> x;
        
        // Greedy: assign each a[i] to smallest b[j] >= a[i] not yet used
        // Track which b indices are used
        vector<bool> used(n, false);
        vector<int> assign(n, -1); // assign[i] = index in b
        
        bool possible = true;
        for(int i = 0; i < n; i++) {
            // Find smallest unused b[j] >= a[i]
            int best = -1;
            for(int j = 0; j < n; j++) {
                if(!used[j] && b[j] >= a[i]) {
                    best = j;
                    break;
                }
            }
            if(best == -1) { possible = false; break; }
            assign[i] = best;
            used[best] = true;
        }
        
        if(!possible) { cout << -1 << "\n"; continue; }
        
        // Count inversions in assign[]
        long long inv = 0;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                if(assign[i] > assign[j]) inv++;
        
        cout << inv << "\n";
    }
}