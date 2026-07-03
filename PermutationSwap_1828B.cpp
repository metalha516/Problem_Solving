#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i = 1; i<arr.size(); i++){
            cin>>arr[i];
        }

        int ans = 0;
        
        for(int i = 1; i<arr.size(); i++){
            ans = __gcd(ans, abs(arr[i] - i));
        }

        cout<<ans<<endl;
    }
}