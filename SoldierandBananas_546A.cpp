#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long totalCost = 0;
    for (int i = 1; i <= w; i++)
    {
        totalCost += i * k;
    }
    cout << (totalCost - n < 0 ? 0 : totalCost - n) << endl;
}