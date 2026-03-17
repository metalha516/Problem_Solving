#include<bits/stdc++.h>
using namespace std;

int solve(int i, int amount, vector<int>&coins, vector<vector<int>>&dp){
    if(amount == 0) return 1;
    if(i >= coins.size() || amount < 0) return 0;
    if(dp[i][amount] != -1) return dp[i][amount];

    int take = solve(i, amount - coins[i], coins, dp);
    int skip = solve(i+1, amount, coins, dp);

    return dp[i][amount] = take + skip;
}

int main(){
    int amount, size;
    cin>>amount>>size;
    vector<int>coins(size);
    for(int &i : coins){
        cin>>i;
    }
    vector<vector<int>>dp(size+1, vector<int>(amount+1, -1));
    cout<<solve(0, amount, coins, dp);
}