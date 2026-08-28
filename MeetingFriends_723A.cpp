#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int min_dist_a = min(abs(b-a), abs(c-a));
    int min_dist_b = min(abs(a-b), abs(c-b));
    int min_dist_c = min(abs(b-c), abs(c-a));
    
    vector<int>dist = {min_dist_a, min_dist_b, min_dist_c};
    sort(dist.begin(), dist.end());
    cout<<dist[2]+dist[1]<<endl;
    // for(auto &i : dist) cout<<i<<"\t";
}