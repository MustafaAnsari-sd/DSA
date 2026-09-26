#include<iostream>
using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }
// int combination(int n, int r){
//     int res = factorial(n) / (factorial(r) * factorial(n-r));
//     return res;
// }

 int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;
//     }

    // Optimized
    int n; 
    cin>>n;
    for(int i=0; i<=n; i++){
        int curr= 1;
        for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr= curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}