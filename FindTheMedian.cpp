// https://www.hackerrank.com/challenges/find-the-median/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    cout<<arr[n/2];
}
