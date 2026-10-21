#include<iostream>
using namespace std;
#include<vector>
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
void reverse_part(int i, int j, vector<int>&a){
    while(i<j){
        swap(a[i], a[j]);
        i++;
        j--;
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
    int k;
    cin>>k;
    k= k%n;
    reverse_part(0,n-k-1, v);
    reverse_part(n-k,n-1, v);
    reverse_part(0,n-1, v);
    display(v);


}