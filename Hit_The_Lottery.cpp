// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>
using namespace std;


int solve(int v){
    
    vector<int>bills = {1, 5, 10, 20, 100};
    int ans = 0;
    for(int i = bills.size()-1; i>=0 && v > 0;  i--){
        if(v>=bills[i]){
            ans+=v/bills[i];
            v = v%bills[i];
        }
    }
    return ans;    
}


int main() {
	int n;
	cin>>n;
	cout<<solve(n);
	
}