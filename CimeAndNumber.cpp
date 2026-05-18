#include<bits/stdc++.h>
using namespace std;

int solve(int a, vector<int>&arr){
    sort(arr.begin(), arr.end());
    string as =  to_string(a);
    int cnt = 0;
    for(auto i : as){
        cnt++;
    }
    string res = "";
    for(int i = 0; i<cnt; i++){
        res+=to_string(arr[0]);
    }

    return stoi(res);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int a, n;
        cin>>a>>n;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
        cout<<solve(a, arr)<<endl;
    }
}