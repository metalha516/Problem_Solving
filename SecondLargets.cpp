#include<bits/stdc++.h>
using namespace std;


int getSecondLargest(vector<int> &arr) {
    
    set<int> st;

    for(auto x : arr){
        st.insert(x);
    }

    if(st.size() < 2) return -1;

    auto it = st.rbegin(); 
    ++it;                  

    return *it;
}
int main(){
    int x;
    vector<int>arr;
    while(cin>>x){
        arr.push_back(x);
    }
    cout<<getSecondLargest(arr);
}