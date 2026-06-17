#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	vector<int>arr(n);
	for(int &i : arr){
	    cin>>i;
	}
	
	
	sort(arr.begin(), arr.end());
	int sum = 0;
	for(int i = 0; i<m; i++){
	   if(arr[i] < 0){
	        sum+=arr[i];
	   }
	}
	
	
	cout<<-sum<<endl;

}
