#include<bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto i : nums){
            sum+=i;
        }

        if(sum&1){
            return false;
        }

        int target = sum/2;

        vector<vector<bool>>dp(nums.size()+1, vector<bool>(target+1, 0));


        for(int i = 0; i<=nums.size(); i++){
            dp[i][0] = true;
        }

        for(int i = 1; i<=nums.size(); i++){
            for(int j = 1; j<=target; j++){
                if(nums[i-1] <= j)
                dp[i][j] = dp[i-1][j - nums[i-1]] || dp[i-1][j];
                else
                dp[i][j] = dp[i-1][j]; 
            }
        }

        return dp[nums.size()][target];
    }


int main(){
    vector<int>nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }

    cout<<(canPartition(nums) ? "true" : "false");
}