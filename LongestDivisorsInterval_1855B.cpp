#include<bits/stdc++.h>
using namespace std;

long long solve(long long n){
    long long ans = 1;    
    while(!(n % ans)){
        ans++;
    }
    return ans-1;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}