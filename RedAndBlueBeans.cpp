#include<bits/stdc++.h>
using namespace std;

bool solve(long long a, long long b, long long c){
    if(c == 0){
        if(a == b) return true;
        else return false;
    }else{
        if(min(a, b)*(c+1) < max(a, b)) return false;
        else return true;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        cout<<(solve(a, b, c) ? "Yes" : "No")<<endl;
    }
}