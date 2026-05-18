#include<bits/stdc++.h>
using namespace std;

long long solve(long long n, long long i, long long g){

    long long a = n*i;

    if(g < (3*i)){

        long long x = n/3;
        long long y = n%3;

        return (x*g) + min(y*i, (y>0 ? g : 0));
    }

    return a;
}



int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, ind, group;
        cin>>n>>ind>>group;

        cout<<solve(n, ind, group)<<endl;
    }
}