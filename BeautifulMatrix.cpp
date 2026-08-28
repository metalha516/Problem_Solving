#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 5, col = 5;
    int x, y;
    vector<vector<int>>matrix(row, vector<int>(col));
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    cout<<abs(2-x) + abs(2-y)<<endl;
}