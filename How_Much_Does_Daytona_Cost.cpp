// https://codeforces.com/problemset/problem/1878/A

#include<bits/stdc++.h>
using namespace std;
bool solution(vector<int> s, int k) {
    sort(s.begin(), s.end());
    
    int start = 0;
    int end = s.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (s[mid] == k) {
            return true;
        }
        else if (s[mid] > k) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>x(n);
        for(int i = 0; i<n; i++){
            cin>>x[i];
        }
        string res = solution(x, k) ? "YES" : "NO";
        cout<<res<<endl;
    }
}