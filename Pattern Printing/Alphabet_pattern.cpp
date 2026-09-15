#include<iostream>
using namespace std;
int main(){
     // Alphabet Pattern- 
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    int m;
    cin>>m;
    int n;
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64); // Typecasting
        }
        cout<<endl;
    }
}