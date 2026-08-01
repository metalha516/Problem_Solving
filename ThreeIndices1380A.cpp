#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>arr, int n){
    for(int j = 2; j<=n-1; j++){
            int i = -1, k = -1;
            //check left part
            for(int l = 1; l<j; l++){
                if(arr[l] < arr[j]){
                    i = l;
                    break;
                }
            }
            //check Right part
            for(int r = j+1; r<=n; r++){
                if(arr[r] < arr[j]){
                    k = r;
                    break;
                }
            }

            if(i != -1 && k != -1){
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<" "<<k<<endl;
                return;
            } 

        }
        cout<<"NO"<<endl;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        arr.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        solve(arr, n);
}}