#include<bits/stdc++.h>
using namespace std;

map<int, int>arr = {
        {1, 1}, {2, 3}, {3, 6}, {4, 10}
};


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first = s[0] - '0';
        int result = (first - 1)*10;
        result+=arr[s.size()];
        cout<<result<<endl;
    }
}