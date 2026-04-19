#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>arr;
vector<int>dp;
int solve(int n){
    if(n == 0 || n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    return dp[n] = min(solve(n-1) + arr[n-1], solve(n-2) + arr[n-2]);
}

int main(){
    cin>>n;
    arr.assign(n, -1);
    for(auto &i : arr){
        cin>>i;
    }
    dp.resize(n+1);
    cout<<solve(n);
}