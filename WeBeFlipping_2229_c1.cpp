#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& arr){

    vector<int> ans;
    int cnt = 0;

    for(int i = arr.size()-1; i>=0; i--){

        int x = arr[i];

        // if odd number of flips happened
        if(cnt % 2)
            x *= -1;

        // current effective value is positive
        if(x > 0){
            ans.push_back(i+1);
            cnt++;
        }
    }

    return ans;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> arr(n);

        for(auto &i : arr)
            cin >> i;

        vector<int> sol = solve(arr);

        cout << sol.size() << endl;

        for(auto i : sol)
            cout << i << " ";

        cout << endl;
    }
}