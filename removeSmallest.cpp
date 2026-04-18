#include<bits/stdc++.h>
using namespace std;
string solve(vector<int>&arr){
    if(arr.size()==1) return "YES";

    sort(arr.begin(), arr.end());

    for(int i = 0; i<arr.size()-1; i++){
        if(abs(arr[i] - arr[i+1]) <= 1) continue;
        else{
            return "NO";
        }
    }

    return "YES";
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