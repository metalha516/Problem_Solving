#include<bits/stdc++.h>
using namespace std;

#define x 30005
vector<int>graph[x];
bool visited[x];

void dfs(int node){
    visited[node] = 1;
    for(int i = 0; i<graph[node].size(); i++){
        int next = graph[node][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    for(int i = 1; i<n; i++){
        int a;
        cin>>a;
        graph[i].push_back(i+a);
    }
    dfs(1);
    cout<<(visited[t] ? "YES" : "NO")<<"\n";
}