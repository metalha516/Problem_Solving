#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long t;
    cin>>t;
    while(t--){
        long long n;
    cin>>n;
    int cnt = 0;
    bool ans = true;
    while(n != 1){
        if(n % 6 ==0){
            n/=6;
            cnt++;
        }else{
            if(n*2 % 6 == 0){
                n= n*2;
                cnt++;
            }else{
                ans = false;
                break;
            }
        }
    }

    cout<<(ans ? cnt : -1)<<endl;
    }

}