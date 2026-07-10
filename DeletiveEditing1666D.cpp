#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;

        vector<int>freq(26, 0);

        for(auto i : t){
            freq[i - 'A']++;
        }

        for(int i = s.length()-1; i>= 0; i--){
            if(freq[s[i] - 'A'] > 0){
                freq[s[i] - 'A']--;
            }else{
                s[i] = '.';
            }
        }

        string final = "";

        for(char i : s){
            if(i != '.'){
                final+=i;
            }
        }

        string result = (final == t) ? "YES" : "NO";
        cout<<result<<endl;

    }
}