#include<iostream>
using namespace std;
int factorial(int n){
    int fact= 1;
    for(int i=1; i<=n; i++){
        fact*= i;
    }
    return fact;
}
int combination(int n, int r){
     int res = factorial(n) / (factorial(r) * factorial(n-r));
    return res;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r);
}