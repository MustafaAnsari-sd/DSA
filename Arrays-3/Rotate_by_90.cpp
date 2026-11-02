#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        // Transpose
        for(int i=0; i<m; i++){
            for(int j=i+1; j<m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse
        for(int i=0; i<m; i++){
            int j=0;
            int k= m-1;
            while(j<k){
                swap(matrix[i][j], matrix[i][k]);
                j++;
                k--;
            }
        }
    }
};