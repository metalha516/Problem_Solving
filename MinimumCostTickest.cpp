//leet 983

#include<bits/stdc++.h>
using namespace std;
vector<int>dp;

int solve(int i, vector<int>& days, vector<int>& costs){
    if(i == days.size()) return 0;
    if(dp[i] != -1) return dp[i];

    dp[i] = INT_MAX;

    int index = 0 , j = i;

    for(auto d : {1, 7, 30}){
        while(j < days.size() && days[j] < days[i]+d){
            j++;
        }
        dp[i] = min(dp[i], costs[index]+solve(j, days, costs));
        index++;
    }
    return dp[i];
}

int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.assign(days.size()+1, -1);
        return solve(0, days, costs);
    }

int main(){
    vector<int>cost, days;
    int x;

    while(cin>>x && x != -1){
        cost.push_back(x);
    }
    
    while(cin>>x){
        days.push_back(x);
    }

    cout<<mincostTickets(days, cost);

}