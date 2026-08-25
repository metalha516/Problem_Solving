#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        
        bool answer = false;
        
        // ---- Check 1: is n even, and is n/2 a perfect square? ----
        if(n % 2 == 0){
            long long half = n / 2;
            
            // find integer square root of "half"
            long long root = (long long)sqrt((double)half);
            
            // check nearby values too, because sqrt() can be slightly off
            for(long long r = root - 2; r <= root + 2; r++){
                if(r >= 0 && r * r == half){
                    answer = true;
                }
            }
        }
        
        // ---- Check 2: is n itself a perfect square with an even root? ----
        if(!answer){
            long long root = (long long)sqrt((double)n);
            
            for(long long r = root - 2; r <= root + 2; r++){
                if(r >= 0 && r * r == n && r % 2 == 0){
                    answer = true;
                }
            }
        }
        
        if(answer){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}