#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
            int a, b, n;
    cin>>a>>b>>n;
    vector<int>arr(n);
    for(auto &i: arr){
        cin>>i;
    }

    for(auto x : arr){
        b+=min(x, a-1);
    }
    cout<<b<<endl;
    }
}