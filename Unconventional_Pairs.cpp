// https://codeforces.com/problemset/problem/2149/B

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>arr){
    sort(arr.begin(), arr.end());
      int Max = INT_MIN;
      int x = 0, y = 1, n = arr.size();
      while(x<n && y<n){
        Max = max(Max, abs(arr[x] - arr[y]));
        x+=2, y+=2;
      }
      return Max;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<solve(arr)<<endl;
    }
}


