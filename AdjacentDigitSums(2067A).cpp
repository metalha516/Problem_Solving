#include<bits/stdc++.h>
using namespace std;

string solve(int x, int  y){
    if((x+1-y)/9 >=0 && (x+1-y)%9 == 0){
        return "Yes";
    }
    return "No";
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        cout<<solve(x, y)<<endl;
    }
}