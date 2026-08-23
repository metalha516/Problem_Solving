#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;

        vector<int>Aeven, Aodd, Beven, Bodd;

        for(int i = 0; i<n; i++){
            if(s1[i] == '0'){
                if(i%2 == 0) Aeven.push_back(i);
                else Aodd.push_back(i);
            }
            if(s2[i] == '0'){
                if(i%2 == 0) Beven.push_back(i);
                else Bodd.push_back(i);
            }
        }

        if(Aeven.size() == Beven.size() && Aodd.size() == Bodd.size()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}