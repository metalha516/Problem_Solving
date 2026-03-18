#include<bits/stdc++.h>
using namespace std;

int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n - 1;

        
        while (r > 0 && arr[r] >= arr[r - 1]) {
            r--;
        }

        if (r == 0) return 0; 

        int shortest = r;

        while (l < r) {
            while (r < n && arr[l] > arr[r]) {
                r++;
            }

            shortest = min(shortest, r - l - 1);
            l++;

            if (l > 0 && arr[l] < arr[l - 1]) {
                break;
            }
        }

        return shortest;
    }


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i : arr){
        cin>>i;
    }
   cout<< findLengthOfShortestSubarray(arr);
}