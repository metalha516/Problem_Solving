#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long x = (a - 1) + (b - 1) * a;
        cout << (x == c ? "YES" : "NO") << endl;
    }
}