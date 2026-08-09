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
        int cnt = 0, mxcnt = 0;
        for(auto c : s){
            if(c == '#'){
                cnt++;
                mxcnt = max(cnt, mxcnt);
            }else{
                cnt = 0;
            }
        }
        cout<<(mxcnt == 1 || mxcnt == 2 ? 1 : mxcnt % 2 != 0 ? (mxcnt+2)/2 : (mxcnt+1)/2 ) <<endl;
    }
}