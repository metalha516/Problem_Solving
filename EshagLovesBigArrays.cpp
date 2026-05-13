#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr){
    sort(arr.begin(), arr.end());
    int count = 0;
    for(auto i : arr){
        if(i == arr[0]){
            count++;
        }
    }
    return arr.size()-count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &i: arr){
            cin>>i;
        }
        cout<<solve(arr)<<endl;
    }
}