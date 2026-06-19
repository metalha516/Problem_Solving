#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, q;
        cin>>n>>q;
        vector<long long>arr(n);
        long long old_sum = 0;
        for(auto &i : arr){
            cin>>i;
            old_sum+=i;
        }

        vector<long long>prefix_sum(n+1, 0);

        for(int i = 1; i<=n; i++){
            prefix_sum[i] = prefix_sum[i-1]+arr[i-1];
        }

        for(long long i = 0; i<q; i++){
            long long l, r, k;
            cin>>l>>r>>k;
            
            long long sum_to_remove = prefix_sum[r] - prefix_sum[l-1];

            long long sum_to_add = (r-l+1)*k;

            long long total_sum = old_sum - sum_to_remove + sum_to_add;

            cout<<(total_sum&1 ? "YES" : "NO")<<endl;
        }
    }
}