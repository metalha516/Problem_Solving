// https://www.hackerrank.com/challenges/quicksort1/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
vector<int> quickSort(vector<int> arr) {
    vector<int>l, r, e, all;
    int pivot = arr[0];
    for(int i : arr){
        if(i > pivot){
            r.push_back(i);
        }if(i<pivot){
            l.push_back(i);
        }if(i==pivot){
            e.push_back(i);
        }
    }
    for(int i : l){
        all.push_back(i);
    }
    for(int i : e){
        all.push_back(i);
    }
    for(int i : r){
        all.push_back(i);
    }
    return all;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    vector<int>ans = quickSort(arr);
    for(auto i : ans){
        cout<<i<<" ";
    }
}