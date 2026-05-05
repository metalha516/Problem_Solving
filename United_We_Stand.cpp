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
        
        long long mx = *max_element(arr.begin(), arr.end()); // find max
        
        vector<long long> b, c;
        for(auto x : arr){
            if(x == mx) c.push_back(x); // max goes to c
            else         b.push_back(x); // everything else to b
        }
        
        if(b.empty()){
            cout << -1 << "\n";
        } else {
            cout << b.size() << " " << c.size() << "\n";
            for(auto x : b) cout << x << " ";
            cout << "\n";
            for(auto x : c) cout << x << " ";
            cout << "\n";
        }
    }
}