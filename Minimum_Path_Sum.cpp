#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&dp){
    int m = grid.size();
    int n = grid[0].size();
    if(i>= m || j >= n) return INT_MAX;
    if(i == m-1 && j == n-1) return grid[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    int down = solve(i+1, j, grid, dp);
    int right = solve(i, j+1, grid, dp);

    return dp[i][j] = grid[i][j] + min(down, right);
}

int main(){
    vector<vector<int>>grid;
    int row, col;
    cin>>row>>col;
    for(int i = 0; i<row; i++){
        vector<int>drawer;
        for(int j = 0; j<col; j++){
            int x;
            cin>>x;
            drawer.push_back(x);
        }
        grid.push_back(drawer);
    }
    vector<vector<int>>dp(row, vector<int>(col, -1));
    cout<<solve(0, 0, grid, dp);
}