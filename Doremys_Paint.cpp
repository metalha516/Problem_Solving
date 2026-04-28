#include<bits/stdc++.h>
using namespace std;

string Solve(vector<long long>& arr){

    map<long long, long long> freq;

    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }

    if(freq.size() >= 3){
        return "NO";
    }
    else if(freq.size() == 1){
        return "YES";
    }
    else{
        long long freq_1 = freq.begin()->second;
        long long freq_2 = freq.rbegin()->second;

        if(freq_1 == freq_2) return "YES";
        else if(abs(freq_1 - freq_2) == 1) return "YES";  
        else return "NO";
    }
}

int main(){
    long long t;
    cin >> t;  
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(auto& i : arr){
            cin >> i;
        }
        cout << Solve(arr) << "\n";
    }
}