#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<string, int>m;

    int max_ = 0;
    string res;
    for(int i = 0; i<s.length()-1; i++){
        m[s.substr(i, 2)]++;
    }

    for(auto i : m){
        if(max_ < i.second){
            max_ = i.second;
            res = i.first;
        }
    }
    cout<<res;

}