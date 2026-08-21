#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int n;
        cin>>n;
        int ans = 0;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
            ans += i-1;
        }

        cout<<(ans&1 ? "errorgorn": "maomao90")<<endl;
    }
    
}