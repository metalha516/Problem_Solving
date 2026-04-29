#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>&nums){
    int res = nums[0];
    int curMax = 1, curMin = 1;

    for(int num : nums){
        int temp = curMax*num;
        curMax = max(max(curMax*num, curMin*num), num);
        curMin = min(min(temp, curMin*num), num);
        res = max(curMax, res);
    }
    return res;
}

int main(){
    vector<int>nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    cout << maxProduct(nums);
}