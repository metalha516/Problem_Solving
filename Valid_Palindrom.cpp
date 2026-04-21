#include<bits/stdc++.h>
using namespace std;


bool alphaneumaric(char a){
        return (tolower(a) >= 'a' && tolower(a) <= 'z') || (a >= '0' && a <= '9');
}

bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;

        while (start < end) {

            if (!alphaneumaric(s[start])) {
                start++;
                continue;
            }

            if (!alphaneumaric(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }
        return true;
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
}