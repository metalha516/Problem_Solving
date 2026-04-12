#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    long long ans = 0;   
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    bool typeable[26] = {0};
    for(int i = 0; i < k; i++){
        char ch;
        cin >> ch;
        typeable[ch - 'a'] = true;
    }

    vector<int> a(n);          
    for(int i = 0; i < n; i++){
        a[i] = typeable[s[i] - 'a'] ? 1 : 0;
    }

    vector<long long> dp(n+1, 0);
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            dp[i+1] = 0;      
        } else {
            dp[i+1] = dp[i] + 1;
        }
        ans += dp[i+1];
    }

    cout << ans << endl;
}