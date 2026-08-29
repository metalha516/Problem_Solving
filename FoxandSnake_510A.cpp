#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>>grid(n, vector<char>(m, '.'));
    int right = 1, left = 3;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i % 2 == 0){
                grid[i][j] = '#';
            }else if(i == right){
                grid[i][m-1] = '#';
                right+=4;
            }else if(i == left){
                grid[i][0] = '#';
                left+=4;
            }
        }
    }


    for(auto i : grid){
        for(auto j : i){
            cout<<j;
        }
        cout<<endl;
    }

}