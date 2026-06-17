#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>m>>n;

    cout<<(min(n, m) % 2 == 0 ? "Malvika" : "Akshat");
}