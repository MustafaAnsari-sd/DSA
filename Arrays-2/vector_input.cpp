#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}