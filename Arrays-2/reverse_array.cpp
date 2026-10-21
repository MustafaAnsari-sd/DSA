#include<iostream>
using namespace std;
#include<vector>
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // vector<int> v2(v.size());
    // for(int i=0; i<n; i++){
    //     int j= v.size()-1-i;
    //     v2[i]= v[j];
    // }
    // display(v2);

    // reverse without using extra array-
    int i=0, j= n-1;
    while(i<j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
    display(v);

}