#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;

    if(m%n){ 
        cout<<-1<<endl;
        return 0;
    }

    long long div = m / n;

    int moves = 0;

    while(div % 2 == 0){
        div/=2;
        moves++;
    }

    while(div % 3 == 0){
        div/=3;
        moves++;
    }

    long long ans = (div == 1) ? moves : -1;
    cout<<ans<<endl;

}