#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev = 0;
    while(n != 0){
        int digit = n%10;
        rev = (rev*10) + digit;
        n/=10;

        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
    }
    return rev;
}


int reverseExponentiation(int n) {
        int power = reverse(n);
        int extra = 1;
        // if(power == n || n >= 10){
        //     extra = 0;
        // }
        return extra+pow(n, power);  
}


int main(){
    int x;
    cin>>x;
    cout<<reverseExponentiation(x);

}