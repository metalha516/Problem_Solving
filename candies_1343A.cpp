#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        for(int  k = 2; k<=35; ++k){

            int den = (1<<k) -1;

            if(n%den == 0){ 
                x = n/den;
                break;
        }
        }
        cout<<x<<endl;
    }
}