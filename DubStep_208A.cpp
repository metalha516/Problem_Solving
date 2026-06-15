#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    string ans = "";
    bool in_middle = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(in_middle)ans+=" ";
            i+=2;
        }else{
            ans+=s[i];
            in_middle = true;
        }
    }
    cout<<ans;
}