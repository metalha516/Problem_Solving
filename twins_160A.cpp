#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return b < a;
}

int main(){
   
        int n;
        cin>>n;

        if(n == 1){
            cout<<1<<endl;
            return 0;
        }

        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
        sort(arr.begin(), arr.end(), compare);

        

        if(arr.size()==2 && (arr[0] == arr[1])){
            cout<<arr.size()<<endl;
            return 0 ;
        }

        int sum_a, sum_b;
        int cnt = 0;
        for(int i = 1; i<n; i++){
            sum_a = accumulate(arr.begin(), arr.begin()+i, 0);
            sum_b = accumulate(arr.begin()+i, arr.end(), 0);
            // cout<<sum_a<<" "<<sum_b<<endl;
            cnt++;
            if(sum_a > sum_b){
                break;
            }
        }
        cout<<cnt<<endl;
    }
