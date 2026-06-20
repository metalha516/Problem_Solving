#include<bits/stdc++.h>
using namespace std;

int main(){
    string key_board_map = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string check, typed;
    cin>>check>>typed;
    string result ="";
    for(auto c : typed){
        int ind = key_board_map.find(c);
        
        result+= check == "R" ? key_board_map[ind-1] : key_board_map[ind+1]; 
    }
    cout<<result;
}