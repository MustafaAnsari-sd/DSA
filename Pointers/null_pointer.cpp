#include<iostream>
using namespace std;
int main(){
    int *ptr= NULL;  // Reserved Address
    cout<<ptr<<endl; // 0
    // \0 is a NULL character
    int *ptr2= '\0';
    int *ptr3= 0;
    cout<<ptr2<<endl<<ptr3;

    // Output will be same for ptr, ptr2 and ptr3
    // Will use NULL pointers more in Linked List
}