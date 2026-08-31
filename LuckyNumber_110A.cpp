#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int lucky_count = 0;
    for (char c : s) {
        if (c == '4' || c == '7') {
            lucky_count++;
        }
    }

    if (lucky_count == 4 || lucky_count == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}