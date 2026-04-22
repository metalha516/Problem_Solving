#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int diff = n/2;
        if(diff%2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int i = 2;
        while(--n){
            cout<<i<<" ";
            if(i == 2*diff) i=1;
            else i+=2;
        }
        cout<<i+diff<<endl;
    }
}