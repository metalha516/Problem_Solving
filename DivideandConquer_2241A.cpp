#include<bits/stdc++.h>
using namespace std;

bool solve(int x, int y){
    return x % y == 0 ;
}
int main(){
     int t;
     cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;

        

        // for(auto i : namta){
        //     cout<<i<<endl;
        // }


        cout<<( solve(x, y) ? "YES" : "NO")<<endl;
    }
}




