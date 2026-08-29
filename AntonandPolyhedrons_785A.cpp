#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>dictionary = {
        {"Tetrahedron" , 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    int sum = 0;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        sum+=dictionary[s];
    }
    cout<<sum<<endl;
}