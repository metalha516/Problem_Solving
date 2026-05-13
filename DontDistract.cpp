#include<bits/stdc++.h>
using namespace std;

bool solve(string x){
    vector<bool>visited(26, false);
    for(int i = 0; i<x.size(); i++){
        if(i>0 && x[i] == x[i-1]){
            continue;
        }
        if(visited[x[i] - 'A']) return false;
       
        visited[x[i] - 'A'] = true;
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x;
        cin>>x;
        cout<<(solve(x) ? "YES" : "NO")<<endl;
    }
}