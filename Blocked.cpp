// https://codeforces.com/contest/2220/problem/A
#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    return a > b;
}


void solve(vector<int>&arr){

     if(arr.size() == 1){
        cout << 1<<endl;
        return;
     }

    bool is_duplicate = false;

    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<i; j++){
            if(arr[i] == arr[j]){
                is_duplicate = true;
            }
        }
    }

    if(is_duplicate){
        cout<<-1<<endl;
        return;
    }

    sort(arr.begin(), arr.end(), comp);

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

}



int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        vector<int>arr(size);
        for(auto &i : arr){
            cin>>i;
        }
        solve(arr);
    }
}