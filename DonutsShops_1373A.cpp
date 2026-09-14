#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        long long ans1 = a < c ? 1 : -1;
        long long ans2 = c < a*b ? b : -1;

        cout<<ans1<<" "<<ans2<<endl;
    }
}