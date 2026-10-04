#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;

    int max_turn = 0;
    int last_turn = 0;

    for(int i = 1; i<=n; i++){
        int a;
        cin>>a;
        int turns = (a+m-1)/m;
        last_turn = (turns >= max_turn) ? i : last_turn;
        max_turn = (turns >= max_turn) ? turns : max_turn;
    }
    cout<<last_turn<<endl;
}