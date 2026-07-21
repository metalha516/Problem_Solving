#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, x;
        cin>>n>>x;
        vector<long long>arr(n);
        long long min = 0, max = 0;
        for(auto &i : arr){
            cin>>i;
        }

        for(auto i : arr){
            max+=ceil(i * 1.0/x);
            min+=i;
        }

        min = ceil(min*1.0/x);

        cout<<min<<" "<<max<<endl;
    }
}