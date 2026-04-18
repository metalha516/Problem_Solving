#include<bits/stdc++.h>
using namespace std;

int solve(int i, int p, vector<int>&arr, vector<vector<int>>&dp){

    if(i >= arr.size()) return 0;
    if(dp[i][p+1] != -1) return dp[i][p+1];
    
    int skip = solve(i+1, p, arr, dp);
    int take = 0;
    if(p==-1 || arr[p] < arr[i])
        take = 1 + solve(i+1, i, arr, dp);
    
        return dp[i][p+1] = max(take, skip);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i : arr){
        cin>>i;
    }
    vector<vector<int>>dp(n, vector<int>(n+1, -1));
    cout<<solve(0, -1, arr, dp);
}