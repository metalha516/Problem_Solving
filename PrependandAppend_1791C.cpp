#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    int i = 0;
    int j = s.size()-1;
    while(i < j){
        if((s[i] == '0' && s[j] == '1') || (s[j] == '0' && s[i] == '1')){
            i++;
            j--;            
        }else{
            break;
        }
    }
    string newString = "";
    for(int x = i; x<=j; x++){
        newString+=s[x];
    }

    return newString.length();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(s)<<"\n";
    }
}