#include<bits/stdc++.h>
using namespace std;


bool solve(string s, int n, int k){
    if(n == 1){
        return 1;
    }else if(n == 2 && k == 1){
        return 1;
    }

    vector<int>freq(26);

    for(auto x : s){
        freq[x - 'a']++;
    }

    for(auto &i : freq){
         i = i % 2;
    }

    int cnt = 0;

    for(auto &i : freq){
         if(i == 1){
            cnt++;
         }
    }
    
    return (cnt <= k+1) ? true : false;

}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        cout << (solve(s, n, k) ? "YES" : "NO")<<endl;
    }
}