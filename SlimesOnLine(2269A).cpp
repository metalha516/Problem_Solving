#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr){
    sort(arr.begin(), arr.end());

    int diff = abs(arr[0] - arr[arr.size()-1]);

    if(diff %2 == 1) return (diff/2)+1;

    return diff/2;
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

        cout<<solve(arr)<<endl;
    }
}