#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        string des;

        if (num <= 1399) {
            des = "Division 4";
        } else if (num <= 1599) {
            des = "Division 3";
        } else if (num <= 1899) {
            des = "Division 2";
        } else {
            des = "Division 1";
        }

        cout<<des<<endl;
    }
}