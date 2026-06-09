#include<bits/stdc++.h>
using namespace std;

/*Start with the most frequent value, repeatedly 
double its count using cloning, and pay one swap 
for each newly converted element.*/




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        map<int, int>mp;
        int max_freq = INT_MIN;
        for(int &i : arr){
            cin>>i;
            mp[i]++;
            max_freq = max(max_freq, mp[i]);
        }

       int cnt = max_freq;
    int ans = 0;

    while(cnt < n){
        ans++;
        int x = n - cnt;

        if(x > cnt){
            ans+=cnt;
            cnt+=cnt;
        }else{
            ans+=x;
            cnt+=x;
        }
    }
    
    cout<<ans<<endl;
    }
}