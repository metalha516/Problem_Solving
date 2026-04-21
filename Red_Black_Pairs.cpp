#include<bits/stdc++.h>
using namespace std;

int solve(vector<string>& str, int n){
    int count = 0;

    for(int i = 0; i < n; ){
        if(i + 1 < n){
            int vertical = (str[0][i] != str[1][i]) + (str[0][i+1] != str[1][i+1]);
            int horizontal = (str[0][i] != str[0][i+1]) + (str[1][i] != str[1][i+1]);

            if(horizontal < vertical){
                count += horizontal;
                i += 2;
            } else {
                count += (str[0][i] != str[1][i]);
                i++;
            }
        } else {
            count += (str[0][i] != str[1][i]);
            i++;
        }
    }

    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> str(2);
        cin >> str[0] >> str[1];

        cout << solve(str, n) << endl;
    }
}