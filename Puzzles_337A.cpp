#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> shop(m);

    for (auto &i : shop) {
        cin >> i;
    }

    sort(shop.begin(), shop.end());

    int MIN = shop[m-1] - shop[0];

    for (int i = 0; i + n - 1 < m; i++) {
        MIN = min(MIN, shop[i + n - 1] - shop[i]);   //checking each 4 consecutive elements first and last diff
    }

    cout << MIN;
}