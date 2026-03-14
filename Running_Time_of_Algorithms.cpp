#include<bits/stdc++.h>
using namespace std;

int insertionSort(vector<int> arr)
{
    int n = arr.size();
    int count = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            count++;   
        }

        arr[j + 1] = key;
    }

    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << insertionSort(arr);
}