#include<bits/stdc++.h>
using namespace std;

string solve(string x, int n){
    
    bool capital, full_match, more_Uppercase;
    capital = full_match = more_Uppercase = false;

    for(auto i : x){
        if(i == 'T'){
            capital = true;
            continue;
        }
        if(i < 97){
            more_Uppercase = true;
        }
    }

    bool final = false;

    final = capital && !more_Uppercase && (n==5);

    string target = "timur";

    sort(target.begin(), target.end());

    string y = "";

    for(auto i : x){
        y+=tolower(i);
    }

    sort(y.begin(), y.end());


    if(y == target){
        full_match = true;
    }

    return (final && full_match) ? "YES" : "NO";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x;
        cin>>x;
        cout<<solve(x, n)<<endl;
    }
    return 0;
}