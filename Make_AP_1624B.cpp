#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        bool ans = false;
        if(a == b && b == c) ans = true; 
        if((2*b-c) % a == 0){ 
            if((2*b-c)/a >0)
            ans = true;
        }
        if( (c+a)%(2*b) == 0) ans = true;
        if((2*b-a) % c == 0) {
            if((2*b-a)/c >0)
            ans = true;
        }

        cout<<(ans ? "YES" : "NO")<<endl;
    }
}