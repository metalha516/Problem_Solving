// https://cses.fi/problemset/task/1643
#include<bits/stdc++.h>
using namespace std;

long long maxSumarySum(vector<long long>&arr){
    long long current_sum = arr[0];
    long long best_sum = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        best_sum = max(best_sum, current_sum);
    }
    return best_sum;
}

int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maxSumarySum(arr);
}