#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string>words(n);
        for(auto &w : words)cin>>w;
        vector<string>abbreviation(m);
        for(auto &a : abbreviation) cin>>a;

        map<char, bool>check;
        for(int i = 0; i<n; i++){
            char ch = toupper(words[i][0]);
            check[ch] = true;
        }

        bool ans = true;

        for(int i = 0; i<m; i++){
            for(auto c : abbreviation[i]){
                if(check[c] == false){
                    ans = false;
                    break;
                }
            }
        }
        cout<<(ans ? "YES" : "NO")<<endl;
    }
}