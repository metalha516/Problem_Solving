#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        string y = "";
        cin>>x;
        for(auto i : x){
            y+=tolower(i);
        }
        if(y == "yes"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}