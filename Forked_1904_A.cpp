#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

//set a = knight position from king 
//set b = knight position from Queen
//ans = intersection of knight position 

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, xk, yk, xq, yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        set<pair<int, int>>kingsPosition, QueenPost;

        for(int i = 0; i<4; i++){
            kingsPosition.insert({xk+dx[i]*a, yk+dy[i]*b});
            kingsPosition.insert({xk+dx[i]*b, yk+dy[i]*a});
            
            QueenPost.insert({xq+dx[i]*a, yq+dy[i]*b});
            QueenPost.insert({xq+dx[i]*b, yq+dy[i]*a});
        }
        int ans = 0;
        for(auto position : kingsPosition){
            if(QueenPost.find(position) != QueenPost.end()){
                ans++;
            }
        }

        cout<<ans<<endl;

    }
}