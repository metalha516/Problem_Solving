// https://cses.fi/problemset/task/1633


#include<bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

long long solve(int n, vector<long long>&arr){
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(arr[n] != -1) return arr[n];
    long long  ways = 0;
    for(int dice = 1; dice<= 6; dice++){
       ways = (ways+solve(n-dice, arr))%MOD;
    }
    return arr[n] = ways;
}

int main(){
    int n;
    cin>>n;
    vector<long long>arr(n+1, -1);
    cout<<solve(n, arr);
}