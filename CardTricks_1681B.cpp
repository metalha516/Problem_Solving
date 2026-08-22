#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+3);
        for(int i = 1; i<=n; i++){
            cin>>arr[i];
        }

        int m;
        cin>>m;
        int ans = 1;
        for(int i = 0; i<m; i++){
            int x;
            cin>>x;
            ans = (ans+x)%n;
            if(ans == 0) ans = n;
        }
        cout<<arr[ans]<<endl;
    }
}