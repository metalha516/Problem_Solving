#include<bits/stdc++.h>
using namespace std;

// void print(vector<long long>&arr){
//     for(auto i : arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

int range_calc(vector<long long>&arr){
    sort(arr.begin(), arr.end());
    return abs(arr[0] - arr[2]);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<long long>arr_A(3);
        for(auto &i: arr_A){
            cin>>i;
        }
        vector<long long>arr_b = arr_A;
        arr_b[2] = arr_b[1] + arr_b[0];

        vector<long long>arr_c = arr_A;
        arr_c[1] = arr_c[2] + arr_c[0];

        vector<long long>arr_d = arr_A;
        arr_d[0] = arr_d[2] + arr_d[1];

        cout<<min(min(range_calc(arr_A), range_calc(arr_b)), min(range_calc(arr_c), range_calc(arr_d)))<<endl;
    }
}