#include<iostream>
using namespace std;
void StarTriangle(int x){ // Void function does not return any value
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void greeting(){
    cout<<"Hello"<<endl;
    cout<<"World";
}
int main(){
    // greeting();
    int a,b,c;
    cin>>a>>b>>c;
    StarTriangle(a);
    StarTriangle(b);
    StarTriangle(c);
}