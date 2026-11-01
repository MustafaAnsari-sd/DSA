#include<iostream>
using namespace std;
#include<vector>
int main(){
    // int arr[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}}; Declaration
    // int arr[3][3]= {1,2,3,4,5,6,7,8,9}; Another way of declaration

    // Traversal
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

// Write a program to store roll no. and marks obtained by 4 students side by side in a matrix
    int n;
    cin>>n;
    int m; 
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}