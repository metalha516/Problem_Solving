#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int year = 0;
    while(1){
        if(a > b){
            cout<<year<<endl;
            return 0;
        }
        a*=3;
        b*=2;
        year++;
    }
}