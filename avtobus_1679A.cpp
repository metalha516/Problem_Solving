#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        // cout<<n/6<<"\t"<<(n/6)*6<<"\t"<< ((n/6)*6)-n<<endl;
         
        if(n < 4 || n % 2 != 0){
            cout<<-1<<endl;
        }else{
            long long x = (n+5)/6;
            // if((x*6)-n < 0) x++;
            long long y = n/4;
            //  if((y*4)-n < 0) y++;
            cout<<x<<" "<<y<<endl;
        }
       
    }
}


