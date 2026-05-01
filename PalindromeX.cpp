#include <bits/stdc++.h>
using namespace std;

int zeroInMiddle(int mid, vector<int> &v, int sz)
{
    unordered_set<int> st;
    int d = 0;
    int mex = 0;

    while (mid - d >= 0 && mid + d < sz && v[mid - d] == v[mid + d])
    {
        st.insert(v[mid - d]);

        while (st.count(mex))
            mex++;

        d++;
    }

    return mex;
}

int bothZero(int l, int r, vector<int> &v, int sz)
{
    unordered_set<int> st;
    int d = 0;
    int mex = 0;

    // build palindrome between l and r
    while (l + d <= r - d && v[l + d] == v[r - d])
    {
        st.insert(v[l + d]);

        while (st.count(mex))
            mex++;

        d++;
    }

    // if not fully palindrome
    if (l + d <= r - d)
        return -1;

    // expand outside
    d = 1;
    while (l - d >= 0 && r + d < sz && v[l - d] == v[r + d])
    {
        st.insert(v[l - d]);

        while (st.count(mex))
            mex++;

        d++;
    }

    return mex;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sz = 2 * n;
        vector<int> v(sz);

        for (int i = 0; i < sz; i++)
            cin >> v[i];

        int l = -1, r = -1;

        // find positions of 0
        for (int i = 0; i < sz; i++)
        {
            if (v[i] == 0)
            {
                if (l == -1)
                    l = i;
                else
                    r = i;
            }
        }

        int ans = 1;

        // case 1: center at first 0
        ans = max(ans, zeroInMiddle(l, v, sz));

        // case 2: center at second 0
        ans = max(ans, zeroInMiddle(r, v, sz));

        // case 3: both zeros included
        ans = max(ans, bothZero(l, r, v, sz));

        cout << ans << '\n';
    }

    return 0;
}