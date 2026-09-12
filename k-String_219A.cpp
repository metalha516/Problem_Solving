#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;

    unordered_map<char,int>m;
    for(auto x : s){
        m[x]++;
    }

    string ans = "";

    for(auto x : m){
        if(x.second % k){
            cout<<-1<<endl;
            return 0;
        }else{
            ans+=string(x.second/k, x.first);
        }
    }

    for(int i = 0; i<k; i++){
        cout<<ans;
    }

    cout<<endl;


}