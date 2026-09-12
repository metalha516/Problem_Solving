#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;

            if (k < n || k > 2 * n - 1) {
                cout << -1 << "\n";
                continue;
            }

            int S = 2 * n - k;
            vector<vector<int>> A(n, vector<int>(n, 0));
            int val = 1;

            for (int i = 0; i < S - 1; ++i) {
                A[i][i] = val++;
            }

            for (int i = S - 1; i < n; ++i) {
                for (int j = S - 1; j < n; ++j) {
                    A[i][j] = val++;
                }
            }

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (A[i][j] == 0) {
                        A[i][j] = val++;
                    }
                }
            }

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << A[i][j] << (j == n - 1 ? "" : " ");
                }
                cout << "\n";
            }
        }
    }
    return 0;
}