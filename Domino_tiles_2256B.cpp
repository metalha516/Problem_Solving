#include <bits/stdc++.h>
using namespace std;

string pattern(int n, string temp, char ch) {
    int cnt = 0;
    while ((int)temp.size() < n) {
        if (cnt == 2) {
            cnt = 0;
            ch = (ch == '0') ? '1' : '0';
        }
        temp += ch;
        cnt++;
    }
    return temp.substr(0, n); // Ensure exact length n
}

bool check(int n, const string &s, const string &temp) {
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != temp[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // The 4 shift patterns of period 4 (0011, 1100, 0110, 1001)
        string temp1 = pattern(n, "00", '1');
        string temp2 = pattern(n, "11", '0');
        string temp3 = pattern(n, "0",  '1');
        string temp4 = pattern(n, "1",  '0');

        int ans = 0;
        if (check(n, s, temp1)) ans++;
        if (check(n, s, temp2)) ans++;
        if (check(n, s, temp3)) ans++;
        if (check(n, s, temp4)) ans++;

        cout << ans << "\n";
    }
    return 0;
}