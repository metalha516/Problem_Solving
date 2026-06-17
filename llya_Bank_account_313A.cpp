#include<bits/stdc++.h>
using namespace std;


int main(){
    string num;
    cin>>num;
    string last = "", sec_last ="";

    //last
    for(int i = 0; i<num.length()-1; i++){
        last+=num[i];
    }

    //second_last

    for(int i = 0; i<num.length(); i++){
        if(i == num.length()-2){
            continue;
        }
        sec_last+=num[i];
    }

    long long a = abs(stoll(last));
    long long b = abs(stoll(sec_last));
    cout<<(stoll(num) < 0 ? -min(a, b) : stoll(num));

}