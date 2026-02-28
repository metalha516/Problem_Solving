// https://codeforces.com/problemset/problem/492/B
#include<bits/stdc++.h>
using namespace std;

long double solve(vector<long double>&arr, int l){
    sort(arr.begin(), arr.end());
    long double R = 0; 
    R = max(R, arr[0]-0);
    R = max(R, l-arr[arr.size()-1]);

    for(int i = 1; i<arr.size(); i++){
        long double gap = (arr[i] - arr[i-1])/2.0;
        R = max(R, gap);
    }

    return R;
    
}



int main(){
    long double n, l;
    cin>>n>>l;
    vector<long double>lamps(n);
    for(int i = 0; i<n; i++){
        cin>>lamps[i];
    }
    cout << fixed << setprecision(10) << solve(lamps, l) << "\n";
}