#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    set<int>arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.insert(x);
    }

    vector<bool>present(n+1, false);
    for(int a : arr){
        if(a <= n){
            present[a] = true;
        }
    }
    int mex = 1;
    while(present[mex]){
        mex++;
    }
    cout<<mex<<endl;
}
