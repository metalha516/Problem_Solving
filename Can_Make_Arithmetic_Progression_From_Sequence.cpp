#include<bits/stdc++.h>
using namespace std;


    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = abs(arr[1] - arr[0]);
        for(int i = 0; i<arr.size()-1; i++){
            if(abs(arr[i] - arr[i+1]) != diff){
                return false;
            }
        }
        return true;
    }

int main(){
    int x;
    vector<int>arr;
    while(cin>>x){
        arr.push_back(x);
    }
    cout<<canMakeArithmeticProgression(arr);
}