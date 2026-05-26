#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int total = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            total^=arr[i];
        }

        if(total == 0){
            cout<<"Yes"<<endl;
            continue;
        }

        int xr = 0;
        bool first = false;
        bool ok = false;

        for(int i = 0; i<n-1; i++){
            xr^=arr[i];

            //segment 1 logic
            if(xr == total && !first){
                first = true;
                xr = 0;
            }
            //segment 2 logic

            if(xr == total && first){
                ok = true;
                break;
            }
        }

        cout<<(ok ? "Yes" : "No")<<endl;

    }
}