#include<bits/stdc++.h>
using namespace std;


// n = 2020x + 2021y
// so, y = n - 2020x

string solve(long long n){

    int y;

    for(int x = 0; x <= 1000; x++){

        y = n - (2020*x);

        if(y<0){
            break;  //if subract value is less than 0
        }else if(y % 2021 == 0){
            return "YES";
        }else{
            continue;
        }
    
    }

    return "NO";
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        cout<<solve(n)<<endl;

    }
}