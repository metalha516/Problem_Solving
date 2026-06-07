#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int years = n / 365;
    n-= years*365;
   
    int months = n/30;
    n-= months * 30;

    cout<<years<<" years\n"<<abs(months)<<" months\n"<<n<<" days"<<endl;
}