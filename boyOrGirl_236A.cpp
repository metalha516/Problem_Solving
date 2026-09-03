#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char>list;
    string s;
    cin>>s;
    for(auto c : s){
        list.insert(c);
    }

    cout<<(list.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!")<<endl;
}