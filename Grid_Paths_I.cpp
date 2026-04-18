#include<bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

int n;
vector<string> arr;
vector<vector<int>> dp;

int solve(int i, int j){
    
    if(i >= n || j >= n) return 0;

    
    if(arr[i][j] == '*') return 0;

    
    if(i == n-1 && j == n-1) return 1;

    
    if(dp[i][j] != -1) return dp[i][j];

    int right = solve(i, j+1);
    int down  = solve(i+1, j);

    return dp[i][j] = (right + down) % MOD;
}

int main(){
    cin >> n;
    arr.resize(n);
    for(auto &row : arr) cin >> row;

    dp.assign(n, vector<int>(n, -1));

    cout << solve(0,0) << endl;
}