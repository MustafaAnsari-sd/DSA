#include<iostream>
using namespace std;
#include<vector>
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
// void sort012(vector<int> &a){
//     // Method 1- Count and fill (two pass method)
//     int n= a.size();
//     int noz=0, noo= 0, no2= 0;
//     for(int i=0; i<n; i++){ // Count
//         if(a[i]==0) noz++;
//         else if(a[i]==1) noo++;
//         else no2++;
//     }
//     for(int i=0; i<n; i++){ // Fill
//         if(i<noz) a[i]=0;
//         else if(i<(noo+noz)) a[i]=1;
//         else a[i]= 2;
//     }
   
// Method 2 - Dutch Flag Algorithm

void sort012(vector<int> &a){
    int n= a.size();
    int low= 0, mid= 0, high= n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid], a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==2){
            swap(a[mid], a[high]);
            high--;
        }
        else mid++;
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
    sort012(v);
    display(v);
}