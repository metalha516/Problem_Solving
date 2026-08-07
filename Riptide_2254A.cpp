#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>nums(3);
        for(int &i: nums){
            cin>>i;
        }

        sort(nums.begin(), nums.end());

        int cnt = 0;

        while (1)
        {
            if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]){
                break;
            }
            nums[2]--;
            nums[0]++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}