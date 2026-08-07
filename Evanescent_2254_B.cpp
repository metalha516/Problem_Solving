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

        int base = 1;
        for(int i = 0; i<s.length()-1; i++){
            if(s[i] != s[i+1]) base++;
        }

        // cout<<"Base : "<<base<<endl;

        int min_delta = INT_MAX;

        for(int i = 1; i<s.length()-1; i++){
            int remove = (s[i] != s[i-1] ? 1 : 0) + (s[i] != s[i+1] ? 1 : 0);
            int add = s[i-1] != s[i+1] ? 1 : 0;
            int delta = add - remove;
            min_delta = min(min_delta, delta);
        }

        cout<<base + min_delta<<endl;
    }
}