#include<bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>>& edges) {
        
    vector<vector<pair<int, int>>>adj(V);

    for(auto edge : edges){
        adj[edge[0]].push_back({edge[1], edge[2]});
        adj[edge[1]].push_back({edge[0], edge[2]});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    vector<bool>visited(V, false);
    int minCost = 0;

    pq.push({0, 0});
    
    while(!pq.empty()){
        auto p = pq.top();
        pq.pop();
        int w = p.first;
        int u = p.second;

        if(!visited[u]){
            
            visited[u] = true;
            minCost+=w;
            for(int i = 0; i<adj[u].size(); i++){
                int v = adj[u][i].first;
                int w = adj[u][i].second;
                pq.push({w, v});
            }

        }
    }

        return minCost;
}


int main(){
    vector<vector<int>>adj;
    int v, e;
    cin>>v>>e;
    for(int i = 0; i<e; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj.push_back({u, v, w});
    }
    cout<<spanningTree(v, adj);
}