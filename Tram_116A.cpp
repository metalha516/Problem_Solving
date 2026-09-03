#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int exists = 0, curr = 0, max_ = 0;
    for (int i = 0; i < n; i++)
    {
        int down, up;
        cin >> down >> up;
        exists = (exists - down) + up;
        max_ = max(max_, exists);
    }
    cout << max_ << endl;
}