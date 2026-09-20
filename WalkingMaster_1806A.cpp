#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == c && b == d)
        {
            cout << 0 << "\n";
            continue;
        }

        if (b > d)
        {
            cout << -1 << endl;
            continue;
        }

        long long shift = d - b;
        if (a < c - shift)
        {
            cout << -1 << "\n";
        }
        else
        {
            long long ans = a - (c - shift) + shift;
            cout << ans << "\n";
        }
    }
}