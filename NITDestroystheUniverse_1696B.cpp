#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }



        while(arr[0] == 0 && arr.size()>0){
            arr.erase(arr.begin());
        }
        while(arr[arr.size()-1] == 0 && arr.size() > 0){
            arr.pop_back();
        }
        int ans = 0;
        for(auto i : arr){
            if(i == 0){
                ans++;
            }
        }

        if(arr.size()==0){
            cout<<0<<endl;
            continue;
        }else if(ans!=0){
            cout<<2<<endl;
            continue;
        }else{
            cout<<1<<endl;
            continue;
        }
    }
}