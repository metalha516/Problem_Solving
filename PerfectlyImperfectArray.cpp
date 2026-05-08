#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool Is_square = true;
        while(n--){
            int x;
            cin>>x;
            int r = sqrt(x);
            if(r*r != x) Is_square = false;
        }

        cout<<(!Is_square ? "Yes" : "No")<<endl;
        
    }
}