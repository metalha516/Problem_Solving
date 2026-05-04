#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

int solve(vector<int>&nums, int target){
    if(target == 0) return 1;

    if(target<0) return 0;

    if(dp[target] != -1) return dp[target];
    
    int ways = 0;
    for(auto num : nums){
        ways+=solve(nums, target - num);
    }

    return dp[target] = ways;
}

int combinationSum4(vector<int>& nums, int target) {
    dp.assign(target+1, -1);
    return solve(nums, target);
    }

int main(){
    int x, target;
    cin>>target;
    vector<int>nums;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<<combinationSum4(nums, target);
}