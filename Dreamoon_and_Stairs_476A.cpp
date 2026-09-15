#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;

    long long min_moves = (n+1)/2;
    long long ans = -1;
    for(long long i = min_moves; i<=n; i++){
        if(i % m == 0){
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;
}