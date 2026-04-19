#include<bits/stdc++.h>
using namespace std;

string solve(vector<string>&str, int n){
    for(int i = 0; i<n; i++){
            if((str[0][i] != 'R' && str[1][i] == 'R')||(str[0][i] == 'R' && str[1][i] != 'R')){
            return "NO";
            }
        }
        return "YES";
    
}

int main(){
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        vector<string>str(2);
        for(auto &i : str){
            cin>>i;
        }

        cout<<solve(str, n)<<endl;
   }
}