#include<bits/stdc++.h>
using namespace std;

bool match(string t, string p){
    int n1 = t.length();
    int n2 = p.length();

    for(int i = 0; i<= n1-n2; i++){
        int c = 0;
        for(int j = 0; j<n2; j++){
            if(p[j] == t[i+j]){
                c+=1;
            }
        }
        if(c == n2){
            return true;
        }
    }
    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int c = 0;
        string choto, boro;
        cin>>choto>>boro;

        string x0 = choto;
        string x1 = x0+x0;
        string x2 = x1+x1;
        string x3 = x2+x2;
        string x4 = x3+x3;
        string x5 = x4+x4;

        int ans = -1;

        if(match(x0, boro)) ans=0;
        else if(match(x1, boro)) ans = 1;
        else if(match(x2, boro)) ans = 2;
        else if(match(x3, boro)) ans = 3;
        else if(match(x4, boro)) ans = 4;
        else if(match(x5, boro)) ans = 5;
        
        cout<<ans<<endl;
    }
  
}