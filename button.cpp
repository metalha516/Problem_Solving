#include<bits/stdc++.h>
using namespace std;



int main(){
    long long t;
    cin>>t;
    while(t--){
        
        long long a, b, c;
        cin>>a>>b>>c;
        long long anna = 0, katie = 0;
       
        anna = (c+1)/2;
        katie = c/2;
        if((a+anna) > (b+katie)){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
}