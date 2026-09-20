#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        cout<<(n&1 && !(k&1) ? "NO" : "YES")<<"\n";
    }
}