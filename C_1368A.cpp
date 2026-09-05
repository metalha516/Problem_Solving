#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){int a, b, c;
    cin>>a>>b>>c;
    int op = 0;
    while(a <= c && b <= c){
        if(a < b){
            a+=b;
        }else{
            b+=a;
        }
        op++;
    }

    cout<<op<<endl;}
}
