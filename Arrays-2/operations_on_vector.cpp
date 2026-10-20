#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(8);
    v.emplace_back(9);
    v.push_back(1);
    v.push_back(3);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    v.pop_back(); //removes last element of vector, and capacity of vector does not change
}