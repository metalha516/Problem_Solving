#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(auto &i : a){
            cin>>i;
        }
        for(auto &i : b){
            cin>>i;
        }

        bool ok = true;

        if(n < 2*m) ok = false;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int j = 0; j<m; j++){
            if(a[j] >= b[j]) 
            { ok = false;}
            if(a[n-m+j] <= b[j]){
                ok = false;
            }
        }

        cout<<(ok ? "YES" : "NO")<<endl;
    }
}