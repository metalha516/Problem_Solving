#include<bits/stdc++.h>
using namespace std;


long long solve(long long a, long long b){
    long long diff = abs(b - a);

    long long x = diff/ 10;

    if(diff % 10 != 0 ) x++;

    return x;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<solve(a, b)<<endl;
    }
    return 0;
}