// Pointers is nothing but a way to store addresses
#include<iostream>
using namespace std;
int main(){
    int x= 4;
    int *ptr= &x; // * operator is used to declare a pointer variable which stores the address
    cout<<*ptr<<endl; // output- value of x i.e- 4
    cout<<ptr<<endl; // output- Address of x
    cout<<x<<endl; 
    x= 10;
    cout<<*ptr<<endl;
    *ptr= 20;
    cout<<x;

}