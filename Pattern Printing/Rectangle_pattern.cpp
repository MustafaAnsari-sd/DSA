#include<iostream>
using namespace std;
int main(){
    // Rectangle Pattern
    int m;
    cin>>m;
    int n;
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}