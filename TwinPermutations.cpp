#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>&arr){
    vector<int>b;
    for(auto i : arr){
        b.push_back((arr.size()+1)-i);
    }
    return b;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }

        for(auto i : solve(arr)) cout <<i<<" ";
        cout<<endl;
    }
}