#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        bool pos = false;
        for(int i = 0; i<x.length(); i++){
            if(x[i] == x[i+1]){
                pos=true;
                break;
            }
        }
        cout<<(pos ? 1 : x.size())<<endl;
    }
}