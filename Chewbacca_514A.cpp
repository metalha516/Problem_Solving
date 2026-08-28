#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string res = "";
    for (size_t i = 0; i < s.length(); ++i) {
        int value = s[i] - '0';
        int invert = 9 - value;

        // Keep the first digit as 9 to avoid a leading zero
        if (i == 0 && value == 9) {
            res += '9';
        } else {
            res += (char)('0' + min(value, invert));
        }
    }

    cout << res << "\n";
    return 0;
}