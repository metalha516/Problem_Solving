#include<bits/stdc++.h>
using namespace std;



vector<int>solve(vector<int>&arr){
    sort(arr.begin(), arr.end());
    int s = 0, e = 0;
    int MIN = INT_MAX;
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i+1] - arr[i] < MIN){
            MIN = min(arr[i+1] - arr[i], MIN);
            s = i;
            e = i+1;
        }
    }
    vector<int>res;
    if(arr.size() == 2){
        res.push_back(arr[0]);
        res.push_back(arr[1]);
        return res;
    }

    res.push_back(arr[s]);
    for(int i = e+1; i<arr.size(); i++) res.push_back(arr[i]);
    for(int i = 0; i<s; i++) res.push_back(arr[i]);
    res.push_back(arr[e]);
    return res;
}



int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    for(auto i : solve(arr)){
        cout<<i<<" ";
    }
    cout<<endl;
   }
return 0;
}