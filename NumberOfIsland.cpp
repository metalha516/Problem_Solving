#include<bits/stdc++.h>
using namespace std;

    void DFS(int i, int j, vector<vector<bool>>&visited, vector<vector<char>>& grid){

        if(i <0 || j<0|| i>=grid.size() || j>=grid[0].size()|| visited[i][j] || grid[i][j] == '0')
            return;

        visited[i][j] = true;

        DFS(i, j-1, visited, grid);
         DFS(i+1, j, visited, grid);
          DFS(i-1, j, visited, grid);
           DFS(i, j+1, visited, grid);
           
    }

    int numIslands(vector<vector<char>>&grid) {
        int island = 0;
        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    DFS(i, j, visited, grid);
                    island++;
                }
            }
        }
        return island;
    }

    int main(){
        int n, m;
        cin>>n>>m;
        vector<vector<char>>grid;
        for(int i = 0; i<n; i++){
            vector<char>s;
            for(int j = 0; j<m; j++){
                char x;
                cin>>x;
                s.push_back(x);
            }
            grid.push_back(s);
        }

        cout<<numIslands(grid);

    }