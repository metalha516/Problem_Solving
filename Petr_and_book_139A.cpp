#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&days, int n){

    int sum = 0;
    int totalPages = n;
    
    while(1){for(int i = 0; i<days.size(); i++){
        if(sum >= totalPages){
            // cout<<sum<<"\n";
            return i == 0 ? 7 : i;
        }
        sum+=days[i];
    }
}
}


int main(){
    int n;
    cin>>n;
    vector<int>days(7);
    for(auto &i : days){
        cin>>i;
    }
    // for(auto &i : days){
    //     cout<<i<<" ";
    // }
    cout<<solve(days, n)<<endl;
    
}