#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int>mp;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            if(x < 0 ) x = -x;
            mp[x]++;
        }
        int ans = 0;
        for(auto it : mp){
            if(it.first == 0) ans+=1;
            else if(it.second>=2) ans+=2;
            else ans+=1;
        }
        cout<<ans<<endl;
    }
}