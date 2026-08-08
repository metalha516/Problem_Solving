#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int &i : arr) cin >> i;

        long long total_sum = 0;
        map<int,int> freq;
        for(int x : arr){
            total_sum += x;
            freq[x]++;
        }

        
        int max_freq = 0, dominant = 0;
        for(auto f : freq){
            if(f.second > max_freq){
                max_freq = f.second;
                dominant = f.first;
            }
        }

        
        if(max_freq <= (n + 1) / 2){
            cout << total_sum << "\n";
        }
        
        else{
            long long S_other = total_sum - (long long)max_freq * dominant;
            long long ans = S_other + (long long)(n - max_freq + 2) * dominant;
            cout << ans << "\n";
        }
    }
}