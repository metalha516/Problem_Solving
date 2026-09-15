#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans = n;
    for(long long i = 1; i<n; i++){
        ans+=(n-i)*i;
    }
    cout<<ans<<endl;
}