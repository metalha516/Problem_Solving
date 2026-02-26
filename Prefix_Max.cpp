// https://codeforces.com/problemset/problem/2185/B

#include <bits/stdc++.h>
using namespace std;


int max_(vector<int>arr){
    int Max = INT_MIN;
    for(int i : arr){
        Max = max(Max, i);
    }
    return Max;
}


int main() {
	
     int t;
     cin>>t;
     while(t--){
         	int n;
        	cin>>n;
        	vector<int>x(n);
        	for(int i = 0; i<n; i++){
        	    cin>>x[i];
        	}
	
	cout<<n*max_(x)<<endl;
     }
	
}