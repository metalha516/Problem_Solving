#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int MAx = 0;
        vector<int>arr(n);
        for(auto &i: arr){
            cin>>i;
            MAx = max(MAx, i);
        }

        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == 1){
                arr[i]+=1;
            }
        }

        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i+1] % arr[i] == 0){
                arr[i+1]++;
            }
        }

        for(auto i : arr){
            cout<<i<<" ";
        }
        cout<<endl;

    }
}