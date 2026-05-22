#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string x, y;
        cin>>x>>y;
        string x_ = "";
        string y_ = "";

        for(int i = 0; i<x.size(); i++){
            if(i == 0){
                x_+=y[0];
                continue;
            }
            x_+=x[i];
        }

        for(int i = 0; i<x.size(); i++){
            if(i == 0){
                y_+=x[0];
                continue;
            }
            y_+=y[i];
        }

        cout<<x_<<" "<<y_<<endl;
    }
}