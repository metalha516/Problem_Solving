#include<bits/stdc++.h>
using namespace std;


    
    int manDist(vector<vector<int>>& points, int p1, int p2){
        return abs(points[p1][0] - points[p2][0]) + 
               abs(points[p1][1] - points[p2][1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int minCost = 0;

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        int n = points.size();
        vector<bool> visited(n, false);

        pq.push({0, 0});

        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();

            int wt = p.first;
            int u = p.second;

            if(visited[u]) continue;

            visited[u] = true;
            minCost += wt;

            for(int i = 0; i < n; i++){
                if(!visited[i]){
                    int dist = manDist(points, u, i);
                    pq.push({dist, i});
                }
            }
        }

        return minCost;
    }


int main() {

    int n;
    cin >> n;

    vector<vector<int>> points(n, vector<int>(2));

    for(int i = 0; i < n; i++){
        cin >> points[i][0] >> points[i][1];
    }


    cout <<minCostConnectPoints(points) << endl;

    return 0;
}