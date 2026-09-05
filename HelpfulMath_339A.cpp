#include<bits/stdc++.h>
using namespace std;

bool isNumber(char x){
    return x >= '0' && x<='9';
}


int main(){
    string s;
    cin>>s;
    vector<char>numbers;
    for(auto c : s){
        if(isNumber(c)){
            numbers.push_back(c);
        }
    }

    sort(numbers.begin(), numbers.end());
    string result = "";
    for(auto c : numbers){
        result+=c;
        result+='+';
    }
    result.pop_back();   
    cout<<result<<endl;
}