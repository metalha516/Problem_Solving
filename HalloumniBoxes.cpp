#include<bits/stdc++.h>
using namespace std;

bool is_Sorted(vector<int>arr){
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

bool solve(vector<int>arr, int k){
    return is_Sorted(arr) || k>1;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
        string result = solve(arr, k) ? "YES" : "NO";
        cout<<result<<endl;
    }
}