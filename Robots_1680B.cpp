#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int ans_0 = 0, ans1 = 0;
        int indl = -1, indr = -1;
        bool found = false;
        for (int i = 0; i < n && !found; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'R')
                {
                    indl = i;
                    indr = j;
                    ans1 = 1;
                    found = true;
                    break;
                }
            }
        }
        // checking in left part
        for (int i = 0; i < indl; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'R')
                {
                    ans_0 = 1;
                    break;
                }
            }
        }
        // checking upper part
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < indr; j++)
            {
                if (s[i][j] == 'R')
                {
                    ans_0 = 1;
                    break;
                }
            }
        }

        if (ans_0 == 1 || ans1 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}