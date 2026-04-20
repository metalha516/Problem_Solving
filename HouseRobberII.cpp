#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;

int solve(int n, bool Rob_first, vector<int>&arr){
    if(n >= arr.size() || (Rob_first && n == arr.size()-1)) return 0;

    if(dp[n][Rob_first] != -1) return dp[n][Rob_first];

    int take = solve(n+2, Rob_first || n == 0, arr) + arr[n];
    int skip = solve(n+1, Rob_first, arr);

    return dp[n][Rob_first] = max(take, skip);

}

int main() {
    vector<int>arr;
    int x;
    while(cin>>x){
        arr.push_back(x);
    }

    
    if(arr.size() == 1){
        cout<<arr[0];
        return 0;
    }

    dp.assign(arr.size(), vector<int>(2, -1));

    cout<<max(solve(0, true, arr), solve(1, false, arr));
}