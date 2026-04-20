

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;

int solve(int r, int c){
    if(c == 0 || c == r) return 1;

    if(dp[r][c] != -1) return dp[r][c];

    return dp[r][c] = solve(r-1, c-1) + solve(r-1, c);

    // C^n_r = (n-1)C(r-1) + (n-1)C(r)
}

int main(){
    int numRows;
    cin>>numRows;
    vector<vector<int>>grid;
    dp.assign(numRows+1, vector<int>(numRows+1, -1));
    for(int r = 0; r<numRows; r++){
        vector<int>rows;
        for(int c = 0; c<=r; c++){
            rows.push_back(solve(r, c));
        }
        grid.push_back(rows);
    }

    for(auto rows : grid){
        for(auto cols : rows){
            cout<<cols<<" ";
        }
        cout<<endl;
    }
}