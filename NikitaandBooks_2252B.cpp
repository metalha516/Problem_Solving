#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &i : arr) cin>>i;
        long long prefix = 0;
        bool ok = true;
        for(long long i = 0; i<arr.size(); i++){
            prefix+=arr[i];

            long long minimumCost = (i+1)*(i+2)/2;

            if(prefix < minimumCost){
                ok = false;
                break;
            }
        }

        cout<<(ok ? "YES" : "NO")<<endl;
    }
}