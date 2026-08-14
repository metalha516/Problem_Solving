#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    
    vector<bool> prime(number + 1, true);
    prime[0] = prime[1] = false;
    
    for (int p = 2; p * p <= number; p++) {
        if (prime[p]) { 
            for (int m = p * p; m <= number; m += p) {
                prime[m] = false;
            }
        }
    }
    return prime[number];
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(isPrime(n+1) ? "YES" : "NO")<<endl;
    }
}