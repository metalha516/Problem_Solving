#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int total_two = 0;
        for(auto &i : arr){
            cin>>i;
            if(i == 2){
                total_two++;
            }
        }

        if(total_two&1){
            cout<<-1<<"\n";
            continue;
        }

        int indx = 1;
        int int_2 = 0;
        for(auto i : arr){
            
            if(i == 2){
                int_2++;
            }
            if(abs(int_2 - total_two)==int_2){
                break;
            }
            indx++;
        }

        cout<<indx<<"\n";
        
    }
}