#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
        bool yes = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(__gcd(arr[i], arr[j]) <= 2){
                    yes = true;
                }
            }
        }

        cout<<(yes ? "YES" : "NO")<<"\n";
    }

}