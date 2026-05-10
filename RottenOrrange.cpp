#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int, int>, int>>q;
        vector<vector<bool>>visited(n, vector<bool>(m, false));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    visited[i][j] = true;
                }
            }
        }

        int ans = 0;

        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;
            ans = max(time, ans);
            q.pop();

            if(i + 1 < n && !visited[i+1][j] && grid[i+1][j] == 1){
                q.push({{i+1, j},time+1});
                visited[i+1][j] = true;
            }

            if(i - 1 >= 0 && !visited[i-1][j] && grid[i-1][j] == 1){
                q.push({{i-1, j},time+1});
                visited[i-1][j] = true;
            }

            if(j+1 <m && !visited[i][j+1] && grid[i][j+1] == 1){
                q.push({{i, j+1},time+1});
                visited[i][j+1] = true;
            }

            if(j-1 >= 0 && !visited[i][j-1] && grid[i][j-1] == 1){
                q.push({{i, j-1},time+1});
                visited[i][j-1] = true;
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                   return -1;
                }
            }
        }
        return ans;
    }

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>>grid(n, vector<int>(m));
    for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin>>grid[i][j];
            }
    }

    cout<<orangesRotting(grid);

    // for(auto i : grid){
    //     for(auto j : i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
}