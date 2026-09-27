#include<bits/stdc++.h>
using namespace std;

bool cmp(long long a, long long b){
    return b < a;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
       sort(arr.begin(), arr.end());
       long long max_element = arr[n-1];
       long long min_element = arr[0];
       if(max_element == min_element){
        cout<<"NO"<<"\n";
       }else{
        cout<<"YES"<<"\n";
        cout<<max_element<<" ";
        arr.pop_back();
        for(auto i : arr){
            cout<<i<<" ";
        }
        cout<<"\n";
       }
    }
}