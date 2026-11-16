#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        // Step 1: Make first column all 1
        for(int i=0; i<m; i++){

            if(grid[i][0] == 0){

                for(int j=0; j<n; j++){
                    if(grid[i][j]==0)
                    grid[i][j]= 1;
                    else grid[i][j]= 0;
                }
            }
        }

        // Step 2: Maximize 1s in every remaining column
        for(int j=1; j<n; j++){

            int noz = 0;
            int noo = 0;

            for(int i=0; i<m; i++){

                if(grid[i][j] == 0)
                    noz++;
                else
                    noo++;
            }

            if(noz > noo){

                for(int i=0; i<m; i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]= 0;
                }
            }
        }
// Step 3: Binary to Decimal
int sum = 0;

for(int i=0; i<m; i++){

    int rowSum = 0;
    int x = 1;

    for(int j=n-1; j>=0; j--){
        rowSum += grid[i][j] * x;
        x *= 2;
    }

    sum += rowSum;
}

return sum;
    }
};
