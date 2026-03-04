#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int start, int end){
    // Partition Logic -- Conquere Part
    int pivot = arr[start];
    int c = 0;
    for(int i = start+1; i<=end; i++){
        if(arr[i] <= pivot){
            c++;
        }
    }
    int pivotIndx =  start+c;
    swap(arr[start], arr[pivotIndx]);
    int i = start, j = end;
    while(i < pivotIndx && j > pivotIndx){
        while( arr[i] < pivot){
            i++;
        }
        while( arr[j] > pivot){
            j--;
        }

        if(i < pivotIndx && j > pivotIndx){
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }
    return pivotIndx;
}

void QuickSort(vector<int>&arr, int start, int end){
    // Division Part
    if (start >= end){
        return;
    }
    int pivot = partition(arr, start, end);
    QuickSort(arr, start, pivot-1);
    QuickSort(arr, pivot+1, end);
}

void print(vector<int>&arr){
    for(int i : arr){
        cout<<i<<" ";
    }
}

int main(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    QuickSort(arr, 0, n-1);
    print(arr);
    
}