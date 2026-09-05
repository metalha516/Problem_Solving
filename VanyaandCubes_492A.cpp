#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height = 0;
    int current_level_cube = 0;
    int totalCubes = 0;

    while(true){
        int nextLevel = height+1;
        current_level_cube+=nextLevel;

        if(totalCubes + current_level_cube > n){
            break;
        }

        totalCubes+=current_level_cube;
        height++;
    }
    cout<<height<<endl;
}