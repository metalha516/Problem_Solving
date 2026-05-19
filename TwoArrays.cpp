#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;

        vector<int>x(n), y(n);

        for(auto &i : x){
            cin>>i;
        }

        for(auto &j: y){
            cin>>j;
        }
        bool ans = true;
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        for(int i = 0; i<n; i++){
            if(x[i] > y[i] || abs(y[i] - x[i]) > 1){
                ans = false;
            }
        }
        cout<<(ans ? "YES" : "NO")<<endl;
    }
}