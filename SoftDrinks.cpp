#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    int soda_toast = (k*l)/nl;
    int lime_toast = (c*d);
    int salt_toast = (p/np);
    cout<<min(soda_toast, min(lime_toast, salt_toast))/n<<endl;
}