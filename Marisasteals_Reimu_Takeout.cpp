#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr){
    int count_0 = 0, count_1 = 0, count_2 = 0;

    for(auto i : arr){
        if(i == 0) count_0++;
        if(i == 1) count_1++;
        if(i == 2) count_2++;
    }

    int Minimum = min(count_1, count_2);

    return count_0 + Minimum + ((count_1 - Minimum) / 3) + ((count_2  - Minimum) / 3); 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }

        cout<<solve(arr)<<endl;
    }
}