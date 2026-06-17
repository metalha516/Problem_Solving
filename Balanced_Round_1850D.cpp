#include<bits/stdc++.h>
using namespace std;


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

    sort(arr.begin(), arr.end());

    int cnt = 0, max_cnt = 0;
    for(int i = 0; i<arr.size()-1; i++){
        if(abs(arr[i] - arr[i+1]) > k){
            cnt = 0;
        }else{
            cnt++;
            max_cnt=max(max_cnt, cnt);
        }
    }
    cout<<n-max_cnt-1<<endl;
 }
}