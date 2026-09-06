#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    string s = "";
    int index = 0;
    int step = 1;
    while (index < n) {
        s += t[index];
        index += step;
        step++;
    }
    cout << s << "\n";
    return 0;
}