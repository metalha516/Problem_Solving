#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);

    for(auto &x : arr){
        cin >> x;
    }

    int ans = 1;
    int cnt = 1;

    for(int i = 1; i < n; i++){

        if(arr[i] >= arr[i-1]){   
            cnt++;
        }
        else{
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}