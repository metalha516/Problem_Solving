#include<bits/stdc++.h>
using namespace std;

int main(){
    string s_table;
    cin>>s_table;
    vector<string>stack(5);
    for(auto &i : stack){
        cin>>i;
    }

    bool isValid = false;

    for(auto i : stack){
        if(s_table[0] == i[0] || s_table[1] == i[1]){
            isValid = true;
            break;
        }
    }

    cout<<(isValid ? "Yes" : "No")<<endl;
}