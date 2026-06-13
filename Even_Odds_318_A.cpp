#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, pos;
    cin >> n >> pos;

    long long oddCount = (n + 1) / 2;

    if (pos <= oddCount) {
        cout << 2 * pos - 1;
    } else {
        cout << 2 * (pos - oddCount);
    }

    return 0;
}