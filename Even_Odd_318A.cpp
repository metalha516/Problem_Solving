#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pos;
    cin>>n>>pos;
    vector<int>arr;
    for(int i = 1; i <= n; i+=2){
        arr.push_back(i);
    }
    for(int i = 2; i <= n; i+=2){
        arr.push_back(i);
    }
   
    cout<<arr[pos-1];
}