#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int days = 0;
    while(n > 0){
        n--;        // wear a pair
        days++;
        if(days % m == 0)  // mom buys one at end of every m-th day
            n++;
    }

    cout << days;
}