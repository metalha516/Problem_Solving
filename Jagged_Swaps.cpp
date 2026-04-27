#include<bits/stdc++.h>
using namespace std;

string solve(vector<int>&arr){
    int Max = 0, Min = 500;
    for(auto i : arr){
        Max = max(i, Max);
        Min = min(i, Min);
    }

    bool res = true;

    if(arr[0] == Max || arr[0] != Min){
        res =false;
    }

    return res ? "YES" : "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n, 0);
        for(auto &i: arr){
            cin>>i;
        }
        cout<<solve(arr)<<endl;
    }
}