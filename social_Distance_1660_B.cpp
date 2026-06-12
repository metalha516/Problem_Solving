#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n, m;
        cin>>n>>m;
        vector<long long>arr(n);
        for(auto &i : arr){
            cin>>i;
        }

        sort(arr.begin(), arr.end());

        arr.push_back(arr[0]);
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum+= max(arr[i], arr[i+1]);
        }
        sum+=n;
        cout<<(sum <  m ? "YES" : "NO")<<endl;
    }
}