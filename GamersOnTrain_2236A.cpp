#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min_ = INT_MAX, max_ = INT_MIN;
        while(n--){
            int k;
            cin>>k;
            min_ = min(min_, k);
            max_ = max(max_, k);
        }
        cout<<max_-min_+1<<endl;
    }
}