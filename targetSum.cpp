#include<bits/stdc++.h>
using namespace std;

int solve(int i, int total, vector<int>&nums, int target);

int totalsum;
vector<vector<int>>dp;
int findTargetSumWays(vector<int>& nums, int target) {
        totalsum = accumulate(nums.begin(), nums.end(), 0);
        dp.assign(nums.size(), vector<int>(2*totalsum+1, INT_MIN));
        return solve(0, 0, nums, target);
    }

int solve(int i, int total, vector<int>&nums, int target){
    if(i == nums.size()) return total == target ? 1 : 0;

    if(dp[i][total + totalsum] != INT_MIN){
        return dp[i][total+totalsum];
    }

    int add = solve(i+1, total+nums[i], nums,target);
    int sub = solve(i+1, total-nums[i], nums,target);

    return dp[i][total + totalsum] = add  + sub;
}


int main(){
    vector<int>nums;
    int x, target;
    cin>>target;
    while(cin>>x){
        nums.push_back(x);
    }
    cout<<findTargetSumWays(nums, target);
}