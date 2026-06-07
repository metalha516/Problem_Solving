#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>>arr(n);
        vector<vector<int>>ans(n);
        for(int i = 0; i<n; i++){
            
            for(int j = 0; j<m; j++){
                int x;
                cin>>x;
                arr[i].push_back(x);
            }
            
        }

        for(int i = 0; i<n; i++){
            sort(arr[i].begin(), arr[i].end());
        }

        for(int i = 0; i<m; i++){
            int mn = INT_MAX;
            int ind = 0;
            for(int j = 0; j<n; j++){
                if(arr[j][0] < mn){
                    mn = arr[j][0];
                    ind =j;
                }
            }

            for(int j = 0; j<n; j++){
                if(j == ind){
                    ans[j].push_back(arr[j][0]);
                    arr[j].erase(arr[j].begin());
                }else{
                    ans[j].push_back(arr[j].back());
                    arr[j].pop_back();
                }
            }
        }


        for(auto i : ans){
            for(auto j : i){
                cout<<j<<" ";
            }
            cout<<endl;
        }

    }
}