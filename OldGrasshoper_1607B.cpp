#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, n, temp;
        cin>>x>>n;

        temp = n%4;
        long long value;
        if(x%2 == 0){
            if(temp == 0){
                value = x;
            }
            if(temp == 1){
                value = x-n;
            }
            if(temp == 2){
                value = x+1;
            }
            if(temp == 3){
                value  = x+1+n;
            }
        }else{
            if(temp == 0){
                value = x;
            }
            if(temp == 1){
                value = x+n;
            }
            if(temp == 2){
                value = x-1;
            }
            if(temp == 3){
                value  = x-1-n;
            }
        }
        cout<<value<<endl;
    }
}