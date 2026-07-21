#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
        long long count_0 = 0;
        long long count_1 = 0;
        for(auto i : arr){
            if(i == 1){
                count_1++;
            }
            else if(i == 0){
                count_0++;
            }
        }
        
        long long ways = pow(2, count_0)*count_1;
        cout<<ways<<endl;
    }
}