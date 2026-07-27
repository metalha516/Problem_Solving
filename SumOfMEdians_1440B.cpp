#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr;
        for (long long i = 0; i < n * k; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
    
        long long polong_longer = n*k;
        long long sum = 0;

        while(k--){
            polong_longer -= (n/2)+1;
            sum+=arr[polong_longer];
        }

        cout<<sum<<endl;
    }
}