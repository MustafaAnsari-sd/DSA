#include<iostream>
using namespace std;
#include<vector>
int main(){
    int m;
    cin>>m;
    vector<vector<int>> v(m, vector<int>(m));
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    //transpose
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            swap(v[i][j], v[j][i]);
        }
    }
    cout<<endl;

     for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}