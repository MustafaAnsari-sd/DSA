
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, p, q;

    // Input dimensions of both matrices
    cin >> m >> n;
    cin >> p >> q;

    // First matrix
    vector<vector<int>> v(m, vector<int>(n));

    cout << "Enter first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    // Second matrix
    vector<vector<int>> v2(p, vector<int>(q));

    cout << "Enter second matrix:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> v2[i][j];
        }
    }

    // Check whether multiplication is possible
    if (n == p) {

        // Result matrix initialized with zeros
        vector<vector<int>> res(m, vector<int>(q, 0));

        // Matrix multiplication
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                for (int k = 0; k < n; k++) {
                    res[i][j] += v[i][k] * v2[k][j];
                }
            }
        }

        // Print result matrix
        cout << "Resultant Matrix:\n";

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Matrix multiplication is not possible!";
    }

    return 0;
}
