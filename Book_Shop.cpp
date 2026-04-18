#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;

    vector<int> price(n), pages(n);
    for(int &x : price) cin >> x;
    for(int &x : pages) cin >> x;

    vector<int> dp(w+1, 0);

    for(int i = 0; i < n; i++){
        for(int j = w; j >= price[i]; j--){
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }

    cout << dp[w];
}