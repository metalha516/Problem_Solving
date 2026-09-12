#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ones=0;
        for(int i=0;i<n;i++){ int x; cin>>x; ones+=x; }
        
        if(ones > (n-1)/2) cout<<"Bessie\n";
        else cout<<"Elsie\n";
    }
}