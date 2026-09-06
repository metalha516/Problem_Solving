#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
   while(t--){ string s;
    cin>>s;
    int i = s.find("1");
    int result = 0, count = 0;
    for(int j = i; j<s.length(); j++){
        if(s[j] == '0'){
            count++;
        }else{
            result = count;
        }
    }
    cout<<result<<endl;}
}