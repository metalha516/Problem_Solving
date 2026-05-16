#include<bits/stdc++.h>
using namespace std;

void toposort(int src, vector<vector<int>>&adj, vector<bool>&visited,stack<int>&s){
    visited[src] = true;

    for(auto v : adj[src]){
        if(!visited[v]){
            toposort(v, adj, visited, s);
        }
    }

    s.push(src);
}


bool isCycle(int src, vector<vector<int>>&adj, vector<bool>&visited, vector<bool>&recpath){
    visited[src] = true;
    recpath[src] = true;

    for(auto v : adj[src]){
        if(!visited[v]){
            if(isCycle(v, adj, visited, recpath)){
                return true;
            }
        }else if(recpath[v]){
            return true;
        }
    }

    recpath[src] = false;
    return false;
}

vector<int> findOrder(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);

        for(auto edge : edges){
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool>visited(V, false); vector<bool>recpath(V, false);
        vector<int>res;
        bool Cycle = false;
        
        for(int i = 0; i<V; i++){
            if(!visited[i]){
                if(isCycle(i, adj, visited, recpath)){
                    Cycle = true;
                }
            }
        }

        if(Cycle) return res;

        stack<int>s;
        visited.assign(V, false);

         for(int i = 0; i<V; i++){
            if(!visited[i]){
                toposort(i, adj, visited, s);
            }
        }

        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }

        return res;
    }

int main(){
    int V, e;
    cin >> V >> e;

    vector<vector<int>> arr;

    for(int i = 0; i < e; i++){
        vector<int> x;

        for(int j = 0; j < 2; j++){
            int y;
            cin >> y;
            x.push_back(y);
        }

        arr.push_back(x);
    }

    for(auto i : findOrder(V, arr)){
        cout << i << " ";
    }
}