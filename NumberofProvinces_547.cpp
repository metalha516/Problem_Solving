#include<bits/stdc++.h>
using namespace std;
void dfs(int src, vector<vector<int>>&adj, vector<bool>&visited){
        visited[src] = true;
        for(int i = 0; i<adj[src].size(); i++){
            if(adj[src][i] == 1 && !visited[i]){
                dfs(i, adj, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<bool>visited(V, false);
        int count = 0;
        for(int i = 0 ; i<V; i++){
            if(!visited[i]){
                dfs(i, isConnected, visited);
                count++;
            }
        }
        
    return count;
    }

int main(){
    int n;
    cin>>n;
    vector<vector<int>>adj;
    for(int i = 0; i<n; i++){
        vector<int>x;
        for(int j = 0; j<n; j++){
            int t;
            cin>>t;
            x.push_back(t);
        }
        adj.push_back(x);
    }

    cout<<findCircleNum(adj);

}