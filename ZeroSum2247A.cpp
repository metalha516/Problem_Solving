#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr, int n){
    if(n == 1) return false;
    if(n == 2 || n&1){
        int sum = accumulate(arr.begin(), arr.end(), 0);
        return sum == 0 ? true : false;
    }

    return accumulate(arr.begin(), arr.end(), 0) % 4 == 0;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &i : arr)cin>>i;
        cout<<(solve(arr, n) ? "YES" : "NO")<<endl;
    }
}