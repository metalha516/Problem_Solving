#include<bits/stdc++.h>
using namespace std;

vector<int>dp;
    int solve(int n, vector<int>&nums){
        if(n>=nums.size()){
            return 0;
        }

        if(dp[n] != -1) return dp[n];
        
        int take = nums[n] + solve(n+2, nums);

        int skip = solve(n+1, nums);

        return dp[n] = max(take, skip);
    }

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i : arr){
        cin>>i;
    }
    dp.assign(arr.size(), -1);
    cout << solve(0, arr);
}