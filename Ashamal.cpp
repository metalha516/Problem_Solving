// https://codeforces.com/problemset/problem/2180/B
#include<bits/stdc++.h>
using namespace std;


string solve(vector<string>x){
    string ans = x[0];
    for(int i = 1; i<x.size(); i++){
        string s1 = ans + x[i];
        string s2 = x[i] + ans;
        if(s1 < s2){
            ans = s1;
        }else{
            ans = s2;
        }
    }
    return ans;
}



int main(){
    int t;cin>>t;
    while(t){
        int n; cin>>n;
    vector<string>x(n);
    for(int i = 0; i<n; i++){
        cin>>x[i];
    }
    cout<<solve(x)<<endl;
    t--;
    }
}