#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr;
        arr.push_back(0);
        for(int i = 1; i<=n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        
        long long ans = arr[1]-1;
        long long ind = ans;

        for(int i = 2; i<=n; i++){
            if(ind+i <arr[i]){
                long long y = arr[i] - (ind+i);
                ind+=y;
                ans+=y;
            }
        }
        cout<<ans<<endl;
    }

}