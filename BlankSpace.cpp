#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&s){
    int max_count = 0;
    int count = 0;

    for(auto i : s){
        if( i == 0){
            count++;
            max_count = max(max_count, count);
        }else{
            count = 0;
        }
    }
    return max_count;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &i : arr) cin>>i;
        cout<<solve(arr)<<endl;
    }
}