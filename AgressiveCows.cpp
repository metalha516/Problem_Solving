#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool canPlace(vector<int>& stalls, int k, int dist) {
        int cnt = 1;
        int prev = stalls[0];

        for(int i = 1; i < stalls.size(); i++) {
            if(stalls[i] - prev >= dist) {
                cnt++;
                prev = stalls[i];
            }
        }

        return cnt >= k;
    }

    int solve(int low, int high, vector<int>& stalls, int k) {

        if(low > high) return 0;

        int mid = low + (high - low) / 2;

        if(canPlace(stalls, k, mid)) {
            return max(mid, solve(mid + 1, high, stalls, k));
        }
        else {
            return solve(low, mid - 1, stalls, k);
        }
    }

    int aggressiveCows(vector<int>& stalls, int k) {

        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls.front();

        return solve(low, high, stalls, k);
    }
};

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> stalls(n);

    for(int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    Solution obj;

    cout << obj.aggressiveCows(stalls, k) << endl;

    return 0;
}
