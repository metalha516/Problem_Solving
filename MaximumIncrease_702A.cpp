#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);

    for(auto &i : arr){
        cin>>i;
    }
    long long currlen = 1, maxlen = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] > arr[i-1]){
            currlen++;
        }else{
            maxlen = max(currlen, maxlen);
            currlen = 1;
        }
    }

    cout<<currlen<<endl;
}