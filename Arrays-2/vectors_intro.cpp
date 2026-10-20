#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.emplace_back(4); // Better
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; // Size and capacity both are different things
    // Always use push back, not like v[1]= 5, etc...
    vector<int> v1(5,9); // vector of size 5 is created with elements 9

    for(int i=0; i<v1.size(); i++){ 
        cout<<v1[i]<<" ";
    }
    

}