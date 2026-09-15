#include<iostream>
using namespace std;
int main(){
    //  Flip Triangle Pattern
    // ****
    // ***
    // **
    // *
    // int m;
    // cin>>m; // Enter number of rows 
    // for(int i=1; i<=m; i++){ 
    //     for(int j=1; j<=m+1-i; j++){ 
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // Pattern- 
    // 1
    // 1 3
    // 1 3 5
    // 1 3 5 7

    //  int m;
    // cin>>m; // Enter number of rows 
    // for(int i=1; i<=m; i++){ 
    //     for(int j=1; j<=i; j++){ 
    //         cout<<2*j-1;
    //     }
    //     cout<<endl;
    // }

    // Another Method-
     int m;
    cin>>m; // Enter number of rows 
    for(int i=1; i<=m; i++){ 
        int a=1;
        for(int j=1; j<=i; j++){ 
            cout<<a;
            a +=2;
        }
        cout<<endl;
    }
}