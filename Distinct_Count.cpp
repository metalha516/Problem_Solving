// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/?purpose=signup&source=problem-page&update=google

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        set<int>arr;

        for(int i = 0; i<n; i++){
            int  y;
            cin>>y;
            arr.insert(y);
        }
        if(arr.size() == x) cout<<"Good"<<endl;
        else if(arr.size() < x) cout<<"Bad"<<endl;
        else cout<<"Average"<<endl;
    }
}