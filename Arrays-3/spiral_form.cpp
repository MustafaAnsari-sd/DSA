
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> v(m, vector<int>(n));

    // Input matrix
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> v[i][j];
        }
    }

    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;

    // Spiral traversal
    while(minr <= maxr && minc <= maxc) {

        // Left to Right
        for(int i=minc; i<=maxc; i++) {
            cout << v[minr][i] << " ";
        }
        minr++;

        // Top to Bottom
        for(int j=minr; j<=maxr; j++) {
            cout << v[j][maxc] << " ";
        }
        maxc--;

        // Right to Left
        if(minr <= maxr) {
            for(int k=maxc; k>=minc; k--) {
                cout << v[maxr][k] << " ";
            }
            maxr--;
        }

        // Bottom to Top
        if(minc <= maxc) {
            for(int l=maxr; l>=minr; l--) {
                cout << v[l][minc] << " ";
            }
            minc++;
        }
    }

    return 0;
}
