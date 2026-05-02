#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int>& arr) {
    int mex = 1;
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        if(arr[i] == mex){
            mex++;
        }
        else if(arr[i] > mex){
            return mex;
        }
    }

    return mex;
}



int main(){
    vector<int>arr;
    int x;
    while(cin>>x){
        arr.push_back(x);
    }
    cout<<missingNum(arr);
}