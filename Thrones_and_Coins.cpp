#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(i+1<n && str[i] == '*' && str[i+1] == '*') break;
            if(str[i] == '@') count++;
        }
        cout<<count<<endl;
        t--;
    }
}