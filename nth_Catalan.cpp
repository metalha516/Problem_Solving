#include<bits/stdc++.h>
using namespace std;

vector<int>dp;
    
    int f(int n){
        if(n == 0 || n == 1) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        int ans = 0;
        
        for(int i = 0; i<n; i++){
            ans+=f(i) * f(n-i-1);
        }
        
        return dp[n] = ans;
    }
    
    
    int main(){
        // code here
        int n;
        cin>>n;
        dp.assign(n+1, -1);
        
        cout<<f(n);
        
    }