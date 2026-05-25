#include<bits/stdc++.h>
using namespace std;


    int findCheapestPrice(int n,
                          vector<vector<int>>& flights,
                          int src,
                          int dst,
                          int k) {

        vector<vector<pair<int,int>>> adj(n);

        for(auto &f : flights){
            adj[f[0]].push_back({f[1], f[2]});
        }

        queue<vector<int>> q;

        // {node, cost, stops}
        q.push({src, 0, 0});

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        while(!q.empty()){

            auto cur = q.front();
            q.pop();

            int node = cur[0];
            int cost = cur[1];
            int stops = cur[2];

            if(stops > k) continue;

            for(auto &it : adj[node]){

                int adjNode = it.first;
                int wt = it.second;

                if(cost + wt < dist[adjNode]){

                    dist[adjNode] = cost + wt;

                    q.push({
                        adjNode,
                        cost + wt,
                        stops + 1
                    });
                }
            }
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }


int main(){
    int n, e;
    cin>>n>>e;
    vector<vector<int>>flight;
    for(int i = 0; i<e; i++){
        int u, v, w;
        cin>>u>>v>>w;
        flight.push_back({u, v, w});
    }

    cout<<findCheapestPrice(n, flight, 0, 2, 1);
}   