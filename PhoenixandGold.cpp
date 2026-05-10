#include<bits/stdc++.h>
using namespace std;
int sum_(vector<int>arr){
    int sum = 0;
    for(auto i : arr){
        sum+=i;
    }
    return sum;
}
vector<int>solve(vector<int>&arr, int x){
        if(arr.size() == 1 && arr[0] == x){
            cout<<"NO"<<endl;
            return {};
        }
        vector<int>ans;
        int y = -1;
        bool allElemntLess = true;
        for(auto i : arr){
            if( i > x){
                ans.push_back(i);
                y = i;
                allElemntLess =false;
                break;
            }
        }

        if(allElemntLess){
           int sum = 0;
           for(int i = 0; i<arr.size()-1; i++){
                sum+=arr[i];
                if(sum == x){
                    sum-=arr[i];
                    sum+=arr[i+1];
                    swap(arr[i], arr[i+1]);
                }
           }
           
           if(sum_(arr) == x){
                cout<<"NO"<<endl;
                return {};
           }
           cout<<"YES"<<endl;
           return arr;
        }


        for(auto i : arr){
            if(i == y) continue;
            ans.push_back(i);
        }
        cout<<"YES"<<endl;
        return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }

        for(auto i : solve(arr, x)){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}