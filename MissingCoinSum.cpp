// https://cses.fi/problemset/task/2183/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, reach = 1;
    cin>>n;
    vector<long long>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i : arr){
        if (i > reach){
            break;
        }
        reach+=i;
    }
    cout<<reach<<endl;
}