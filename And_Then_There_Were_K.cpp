#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int answer = 1;
    while(answer*2 <= n){
        answer*=2;
    }
    return answer-1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       cout<<solve(n)<<endl;
    }
}