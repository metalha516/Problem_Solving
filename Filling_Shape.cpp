// https://codeforces.com/gym/302977/problem/A

#include<bits/stdc++.h>
using namespace std;

int solve(int tc){
    vector<int>dp(tc+1, 0);
    dp[0] = 1;
    dp[1] = 0;

    for(int i = 2; i<=tc; i++){
        dp[i] = 2*dp[i-2];
    }

    return dp[tc];
}


int main(){
    int x;
    cin>>x;
    cout<<solve(x);
}