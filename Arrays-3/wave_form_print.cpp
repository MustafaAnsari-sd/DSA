#include<iostream>
using namespace std;
#include<vector>
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<v[i][j]<<" ";
            }

        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}