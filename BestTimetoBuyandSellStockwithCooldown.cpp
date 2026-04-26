#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;

int solve(int i, bool CanBuy, vector<int>&prices){
    if(i >= prices.size()) return 0;
    if(dp[i][CanBuy] != -1) return dp[i][CanBuy];

    int coolDown = solve(i+1, CanBuy, prices);

    if(CanBuy){
        int buy = solve(i+1, false, prices) - prices[i];
        return dp[i][CanBuy] = max(buy, coolDown);
    }else{
        int sell = solve(i+2, true, prices) + prices[i];
        return dp[i][CanBuy] = max(sell, coolDown);
    }
}

int main(){
    vector<int>prices;
    int x;
    while(cin>>x){
        prices.push_back(x);
    }
    dp.assign(prices.size()+1, vector<int>(2, -1));
    cout<<solve(0, true, prices);
}