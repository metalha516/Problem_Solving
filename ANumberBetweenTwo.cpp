#include<bits/stdc++.h>
using namespace std;

bool solve(long long x, long long y){
    return 2*x < y;
}


int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y;

        string res = (solve(x, y)) ? "YES" : "NO";
        cout<<res<<endl;

    }
}