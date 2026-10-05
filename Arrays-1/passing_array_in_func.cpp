#include<iostream>
using namespace std;
void display(int a[]){ // This a[] array is same as arr[]
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){ // This b[] array is also same as arr[]
     b[1]= 99;
}
int main(){
    int arr[6]= {1,2,3,4,5,6};
    display(arr);
    change(arr);
    display(arr);
}