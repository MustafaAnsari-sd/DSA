#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    bool flag= false;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            flag= true;
        }
    }
    if(flag==true){
        cout<<"Element Present! ";
    }
    else{
        cout<<"Not Present ";
    }
}