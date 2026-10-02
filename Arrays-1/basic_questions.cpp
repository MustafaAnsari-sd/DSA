#include<iostream>
using namespace std;
int main(){
    // Print Roll no. of Students whose marks is less than 35 (Roll no. refers to the index of the array)
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){ // Taking Array Input
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }

}