#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

int solve(int n, vector<int>&arr){
    if(n == arr.size()-1) return 0;

    if(dp[n] != -1) return dp[n];

    int one = abs(arr[n] - arr[n+1]) + solve(n+1, arr);
    int sec = INT_MAX;
    if(n+2 < arr.size()){
        sec = abs(arr[n] - arr[n+2]) + solve(n+2, arr);
    }

    return dp[n] = min(one, sec);
}

int minCost(vector<int>&arr){
    dp.assign(arr.size()+1, -1);
    return solve(0, arr);
}

int main(){
    int x;
    vector<int>arr;
    while(cin>>x){
        arr.push_back(x);
    }

    cout<<minCost(arr);
}