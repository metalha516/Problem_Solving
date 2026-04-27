#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

int solve(int i, string s){
    if(dp[i] != -1) return dp[i];
    if(s[i] == '0') return 0;
    
    int res = solve(i+1, s);

    if((i+1 < s.size()) && (s[i] =='1' || (s[i] == '2' && s[i+1] < '7'))){
        res+=solve(i+2, s);
    }

    return dp[i] = res;
}

int main(){
    string s;
    cin>>s;
    dp.assign(s.size()+1, -1);
    dp[s.size()] = 1;
    cout<<solve(0, s);
}