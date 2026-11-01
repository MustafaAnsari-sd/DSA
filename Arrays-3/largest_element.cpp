#include<iostream>
using namespace std;
#include<vector>
#include<climits>
int main(){
    int n; 
    cin>>n;
    int m; 
    cin>>m;
    int maxi= INT_MIN;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]> maxi)
            maxi= arr[i][j];
        }
        cout<<endl;
    }
    cout<<maxi;
    
}