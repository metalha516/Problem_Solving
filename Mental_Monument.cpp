#include<bits/stdc++.h>
using namespace std;

bool checked(int mid, vector<int>& v){
    vector<bool> valid(1e6 + 5, false);
    vector<int> extra;

 
    for(auto x : v){
        if(x < mid && !valid[x]){
            valid[x] = true;
        } else {
            extra.push_back((x - 1) / 2);
        }
    }

    
    int target = 0;
    while(valid[target]) target++;

   
    for(auto rem : extra){
        if(rem >= target){
            valid[target] = true;
            target++;
            while(valid[target]) target++;
        }
    }

    return target >= mid;
}


int binarySearch(int l, int h, vector<int>& v){
    if(l > h) return h;  

    int mid = l + (h - l) / 2;

    if(checked(mid, v)){
        return binarySearch(mid + 1, h, v);  
    } else {
        return binarySearch(l, mid - 1, v);  
    }
}

int main(){
   
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(auto &x : arr){
            cin >> x;
        }

        sort(arr.begin(), arr.end());

        cout << binarySearch(0, n, arr) << "\n";
    }
}