#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool ans = false;
    for(auto c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            ans = 1;
        }
    }

    cout<<(ans ? "YES" : "NO")<<endl;
}