#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (auto &i : arr)
        {
            cin >> i;
        }
        long long res = arr[0];
            for (int i = 1; i < arr.size(); i++)
            {
                res&=arr[i];
            }

        cout<<res<<endl;
    }
}