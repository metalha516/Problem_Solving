// https://codeforces.com/problemset/problem/381/A

#include<bits/stdc++.h>
using namespace std;

pair<int, int>solve(vector<int>arr){
    int z = 0;
    int left = 0;
    int right = arr.size()-1;
    int sereja = 0; int Dima = 0;
    while(left <= right){

        if(z % 2 == 0){
            //sereja
            if(arr[left] > arr[right]){
                sereja+=arr[left];
                left++;
            }else{
                sereja+=arr[right];
                right--;
            }
        }else{
            
            if(arr[left] > arr[right]){
                Dima+=arr[left];
                left++;
            }else{
                Dima+=arr[right];
                right--;
            }
        }
        
        z++;
    }

    return make_pair(sereja, Dima);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i : arr){
        cin>>i;
    }

    cout<<solve(arr).first <<" "<<solve(arr).second;
}
