#include<iostream>
using namespace std;
int main(){
    // // Triangle Pattern
    // // *
    // // **
    // // ***
    // // ****
    // int m;
    // cin>>m; // Enter number of rows 
    // for(int i=1; i<=m; i++){ 
    //     for(int j=1; j<=i; j++){ 
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Pattern
    // 1
    // AB
    // 123
    // ABCD
    int m;
    cin>>m; // Enter number of rows 
    for(int i=1; i<=m; i++){ 
        for(int j=1; j<=i; j++){ 
            if(i%2!=0) cout<<j;
            else cout<<(char)(j+64);
        }
        cout<<endl;
    }
}