#include <bits/stdc++.h>
using namespace std;

int solve(string n) {
    int ans = n.size();
    int len = n.size();
    
    
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            
            string sub = "";
            sub += n[i];
            sub += n[j];
            
            
            if (sub == "00" || sub == "25" || sub == "50" || sub == "75") {
                int deletions = len - i - 2;
                ans = min(ans, deletions);
            }
        }
    }
    return ans;
}

int main() {    
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}