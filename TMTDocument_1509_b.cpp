#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    int m = 0, t = 0;
     for(int i = 0; i<s.size(); i++){
            if(s[i] == 'T'){
                t++;
            }else{
                m++;
            }
            if(m>t) return false;
        }
        return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int T = 0, M = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'T'){
                T++;
            }else{
                M++;
            }
        }
        if(T != M*2){
            cout<<"NO"<<endl;
        }else{
            if(solve(s)){
                reverse(s.begin(), s.end());
                if(solve(s)){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}