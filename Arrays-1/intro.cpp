// Array is a Data Structure ( way to store data)
#include<iostream>
using namespace std;
int main(){
    int arr[7]= {1,2,3,4,5,6,7}; // Declaration
    //or
    int a[]= {1,2,3,4,5,6,7,8,9,0}; // Another way of Declaration
    cout<<arr[6]<<endl; // Accessing Elements
    for(int i=0; i<7; i++){ // Printing Array using Loops 
        cout<<arr[i]<<" ";
    }
}