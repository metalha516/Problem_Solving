#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        bool possible = false;
        int cnt_0 = 0;
        int cnt_1 = 0;

        for(int i = 0; i<s.length(); i++){
            if(s[i] == '0')cnt_0++;
            if(s[i] == '1') cnt_1++;
        }

        if(min(cnt_0, cnt_1) %2){
            possible = true;
        }
       
        cout<<(possible ? "DA" : "NET")<<endl;

    }
}