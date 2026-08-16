#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
         if(n % 2  == 1){
            cout<<"NO"<<endl;
            continue;
        }
        bool valid = true;
        
        long long l = arr[1], r = arr[0];

        for(int i = 2; i<n; i+=2){
            l = max(l, arr[i+1]);
            r = min(r, arr[i]);
        }

        valid = r-l>1 ? true : false;
        cout<<(valid ? "YES" : "NO")<<endl;
    }
}