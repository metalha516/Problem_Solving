#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string res = "";
    for(auto i : s){
        char x = tolower(i);
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y'){
            continue;
        }else{
            res+='.';
            res+=x;
        }
    }
    cout<<res<<endl;
}