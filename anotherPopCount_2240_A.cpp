#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        if (k >= n) {
            cout << n << "\n";
            continue;
        }
        
        int b = 1;
        while ((1LL << b) - 1 <= n / k) {
            b++;}
        
        long long high = (1LL << b) - 1;
        long long low  = (1LL << (b - 1)) - 1;
        
        long long budget = n - k * low;
        long long x = min(k, budget / (high - low));
        
        cout << x * b + (k - x) * (b - 1) << "\n";
    }
    
    return 0;
}