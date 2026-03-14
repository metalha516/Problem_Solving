#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    int n, amount;
    cin>>n>>amount;
    vector<int>coins(n);
    for(int i = 0; i<n; i++){
        cin>>coins[i];
    }
    vector<int>dp(amount+1, INF);
    dp[0] = 0;
    for(int i = 1; i<=amount; i++){
        for(int coin : coins){
            if( i - coin >= 0){
                dp[i] = min(dp[i], dp[i-coin]+1);
            }
        }
    }
    if(dp[amount] == INF){
        cout<<-1;
    }else{
        cout<<dp[amount];
    }
}