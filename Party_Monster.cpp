#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int c = 0;
        for (char x : s) {
            if (x == '(') c++;
            else c--;
        }

        cout << (c == 0 ? "YES\n" : "NO\n");
    }
}