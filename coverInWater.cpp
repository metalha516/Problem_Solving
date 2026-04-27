#include<bits/stdc++.h>
using namespace std;

int solve(string x){
    int n = x.size();
    int count = 0;
    bool cons = false;
    for(int i = 0; i<n; i++){
        if ((i+2 < n) && (x[i] == '.') && (x[i+1] == '.') && (x[i+2] == '.' )){
            cons = true;
            break;
        }
        if(x[i] == '.'){
            count++;
        }
    }

    return cons ? 2 : count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x;
        cin>>x;
        cout<<solve(x)<<endl;
    }
}