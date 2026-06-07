#include<bits/stdc++.h>
using namespace std;


long long solve(vector<long long>arr){
    long long ans = 0;
    for(int a : arr){
        ans |= a;
    }

    return ans;
}



int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(long long &i : arr){
            cin>>i;
        }

        cout<<solve(arr)<<endl;
    }
}