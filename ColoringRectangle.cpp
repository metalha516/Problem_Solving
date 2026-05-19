#include<bits/stdc++.h>
using namespace std;


long long solve(long long ceils){
    return (ceils+2)/3;
    // return solve(r-1, c-1);
}



int main(){
    int t;
    cin>>t;
    while(t--){
        long long r, c;
        cin>>r>>c;
        long long cells = r*c;
        
        cout<<solve((cells))<<endl;
    }
}