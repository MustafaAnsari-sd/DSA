#include<iostream>
using namespace std;
#include<vector>
int main(){
    // binary to decimal
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int sum= 0;
    int x=1;
    for(int i= n-1; i>=0; i--){
         sum += v[i]*x;
         x*= 2;
    }
    cout<<sum;
}