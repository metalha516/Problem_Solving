#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int longest_sub = 1, current_ = 1;
        for(int i = 1; i<s.length(); i++){
            if(s[i] == s[i-1]){
                current_++;
            }else{
                longest_sub = max(longest_sub, current_);
                current_ = 1;
            }
        }

        cout<<max(longest_sub, current_)+1<<endl; // check final terms 
    }
}