#include<bits/stdc++.h>
using namespace std;

bool is_100(vector<int>&arr){
    for(auto i : arr){
        if(i == 100) return true;
    }
    return false;
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
        string result = (is_100(arr)) ? "Yes" : "No";
        cout<<result<<endl;
    }
}